#include "ScriptPCH.h"
#include "ScriptMgr.h"
#include "Chat.h"
#include "Player.h"
#include "GossipDef.h"
#include "ScriptedGossip.h"
#include "ObjectMgr.h"

class npc_all_npc : CreatureScript
{
public:
	npc_all_npc() : CreatureScript("npc_all_npc") {}

	class npc_all_npc_AI : public ScriptedAI
	{
	public:
		npc_all_npc_AI(Creature* creature) : ScriptedAI(creature) {}

		bool GossipHello(Player* player) override
		{
			return OnGossipHello(player, me);
		}

		static bool OnGossipHello(Player* player, Creature* creature)
		{
			std::ostringstream ss;
			ss << "|cff0174DF|TInterface\\icons\\inv_jewelry_amulet_02:35:35:-18:0|tDonation Points: " << player->GetCustomCurrency(DP) << "\n";
			ss << "|cff0174DF|TInterface\\icons\\inv_jewelry_amulet_04:35:35:-18:0|tMG: " << player->GetCustomCurrency(MG) << "\n";
			ss << "|cff0174DF|TInterface\\icons\\inv_jewelry_amulet_03:35:35:-18:0|tVote Points: " << player->GetCustomCurrency(VP) << "\n";
			AddGossipItemFor(player, 0, ss.str().c_str(), 1, 1);

			player->PlayerTalkClass->SendGossipMenu(1, creature->GetGUID());
			return true;
		}

	};
	CreatureAI* GetAI(Creature* creature) const override
	{
		return new npc_all_npc_AI(creature);
	}
};

void AddSC_npc_all_npc()
{
	new npc_all_npc();
}
