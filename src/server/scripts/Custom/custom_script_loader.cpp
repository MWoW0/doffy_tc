/*
 * Copyright (C) 2008-2017 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

 // This is where scripts' loading functions should be declared:
void AddSC_item_teleporter();
void AddSC_mg_system();
void AddSC_npc_Donate_npc();
void AddSC_npc_vote_npc();
void AddSC_npc_MG_npc();
void AddSC_npc_all_npc();
void AddSC_itemscripts();
void AddSC_teleporter_stone();

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddCustomScripts()
{
	AddSC_npc_all_npc();
	AddSC_npc_MG_npc();
	AddSC_item_teleporter();
	AddSC_mg_system();
	AddSC_npc_Donate_npc();
	AddSC_itemscripts();
	AddSC_npc_vote_npc();
    AddSC_teleporter_stone();

}