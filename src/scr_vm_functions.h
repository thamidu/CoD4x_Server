/*
===========================================================================
    Copyright (C) 2010-2013  Ninja and TheKelm

    This file is part of CoD4X18-Server source code.

    CoD4X18-Server source code is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    CoD4X18-Server source code is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>
===========================================================================
*/
#pragma once

#include "scr_vm.h"
#include "g_sv_shared.h"
#include "dobj.h"

#ifndef SCR_ENTREF_DEFINED
#define SCR_ENTREF_DEFINED
typedef int scr_entref_t;
#endif

void PlayerCmd_GetUid(scr_entref_t arg);
void PlayerCmd_SetUid(scr_entref_t arg);
void PlayerCmd_GetGuid(scr_entref_t arg);
void PlayerCmd_GetXuid(scr_entref_t arg);
void PlayerCmd_GetSteamID(scr_entref_t arg);
void PlayerCmd_GetPlayerID(scr_entref_t arg);
void PlayerCmd_GetSteamID64(scr_entref_t arg);
void PlayerCmd_GetPlayerID64(scr_entref_t arg);
void PlayerCmd_GetPower(scr_entref_t arg);
void PlayerCmd_SetPower(scr_entref_t arg);
void PlayerCmd_SetStat(scr_entref_t arg);
void PlayerCmd_GetStat(scr_entref_t arg);
void PlayerCmd_GetUserinfo(scr_entref_t arg);
void PlayerCmd_GetPing(scr_entref_t arg);
void PlayerCmd_SetGravity(scr_entref_t arg);
void PlayerCmd_SetGroundReferenceEnt(scr_entref_t arg);
void PlayerCmd_SetJumpHeight(scr_entref_t arg);
void PlayerCmd_SetMoveSpeed(scr_entref_t arg);
void PlayerCmd_GetGeoLocation(scr_entref_t arg);
void PlayerCmd_GetCountedFPS(scr_entref_t arg);
void PlayerCmd_GetSpectatorClient(scr_entref_t arg);
void PlayerCmd_SetVelocity(scr_entref_t arg);

void PlayerCmd_ForwardButtonPressed(scr_entref_t object);
void PlayerCmd_BackButtonPressed(scr_entref_t object);
void PlayerCmd_MoveLeftButtonPressed(scr_entref_t object);
void PlayerCmd_MoveRightButtonPressed(scr_entref_t object);
void PlayerCmd_SprintButtonPressed(scr_entref_t object);
void PlayerCmd_ReloadButtonPressed(scr_entref_t object);
void PlayerCmd_LeanLeftButtonPressed(scr_entref_t object);
void PlayerCmd_LeanRightButtonPressed(scr_entref_t object);
void PlayerCmd_IsProning(scr_entref_t object);
void PlayerCmd_IsCrouching(scr_entref_t object);
void PlayerCmd_IsStanding(scr_entref_t object);
void PlayerCmd_JumpButtonPressed(scr_entref_t object);
void PlayerCmd_IsInADS(scr_entref_t object);
void PlayerCmd_HoldBreathButtonPressed(scr_entref_t object);
void PlayerCmd_AimButtonPressed(scr_entref_t object);

void GScr_StrTokByPixLen();
void GScr_StrTokByLen();
void GScr_StrPixLen();
void GScr_StrColorStrip();
void GScr_StrRepl();
void GScr_CopyString();
void GScr_GetRealTime();
void GScr_TimeToString();
void GScr_SHA256();
void GScr_CbufAddText();
void GScr_CbufAddTextEx();
void GScr_FS_FOpen();
void GScr_FS_FClose();
void GScr_FS_FCloseAll();
void GScr_FS_TestFile();
void GScr_FS_ReadLine();
void GScr_FS_WriteLine();
void GScr_FS_Remove();
void GScr_SpawnBot();
void GScr_RemoveAllBots();
void GScr_RemoveBot();
void GScr_KickClient();
void GScr_BanClient();
void PlayerCmd_spawn(scr_entref_t arg);
void GScr_NewHudElem();
void GScr_NewClientHudElem();
void HECmd_SetText(scr_entref_t entnum);
void GScr_Spawn();
void GScr_SpawnVehicle();
void GScr_SpawnHelicopter();
void GScr_VectorAdd();
void GScr_TypeTest();

void PlayerCmd_GetSteamGroupMembership(scr_entref_t arg);

void Scr_PrecacheString_f();
void Scr_Destroy_f(scr_entref_t hud_elem_num);

void GScr_IsCvarDefined();

void Scr_IsArray_f();
void GScr_ArrayTest();

qboolean GetTagInfoForEntity(gentity_t *ent, int partNameIdx, DObjPartCache_t *cache, int seekInSubModels);
void PrintModelBonesInfo(gentity_t *ent);


void GScr_CreatePrintChannel();
void GScr_printChannelSet();
void print();
void println();
void iprintln();
void iprintlnbold();
void GScr_print3d();
void GScr_line();
void Scr_GetEnt();
void Scr_GetEntArray();
void GScr_Spawn();
void GScr_SpawnPlane();
void GScr_SpawnTurret();
void GScr_PrecacheTurret();
void Scr_AddStruct();
void GScr_SpawnHelicopter();
void assertCmd();
void assertexCmd();
void assertmsgCmd();
void GScr_IsDefined();
void GScr_IsAlive();
void GScr_GetDvar();
void GScr_GetDvarInt();
void GScr_GetDvarFloat();
void GScr_SetDvar();
void GScr_GetTime();
void Scr_GetEntByNum();
void Scr_GetWeaponModel();
void GScr_GetAnimLength();
void GScr_AnimHasNotetrack();
void GScr_GetNotetrackTimes();
void GScr_GetBrushModelCenter();
void Scr_Objective_Add();
void Scr_Objective_Delete();
void Scr_Objective_State();
void Scr_Objective_Icon();
void Scr_Objective_Position();
void Scr_Objective_OnEntity();
void Scr_Objective_Current();
void Scr_MissileCreateAttractorEnt();
void Scr_MissileCreateAttractorOrigin();
void Scr_MissileCreateRepulsorEnt();
void Scr_MissileCreateRepulsorOrigin();
void Scr_MissileDeleteAttractor();
void Scr_BulletTrace();
void Scr_BulletTracePassed();
void Scr_SightTracePassed();
void Scr_PhysicsTrace();
void Scr_PlayerPhysicsTrace();
void GScr_GetMoveDelta();
void GScr_GetAngleDelta();
void GScr_GetNorthYaw();
void Scr_RandomInt();
void Scr_RandomFloat();
void Scr_RandomIntRange();
void Scr_RandomFloatRange();
void GScr_sin();
void GScr_cos();
void GScr_tan();
void GScr_asin();
void GScr_acos();
void GScr_atan();
void GScr_CastInt();
void GScr_abs();
void GScr_min();
void GScr_max();
void GScr_floor();
void GScr_ceil();
void GScr_sqrt();
void GScr_VectorFromLineToPoint();
void GScr_PointOnSegmentNearestToPoint();
void Scr_Distance();
void Scr_Distance2D();
void Scr_DistanceSquared();
void Scr_Length();
void Scr_LengthSquared();
void Scr_Closer();
void Scr_VectorDot();
void Scr_VectorNormalize();
void Scr_VectorToAngles();
void Scr_VectorLerp();
void Scr_AnglesToUp();
void Scr_AnglesToRight();
void Scr_AnglesToForward();
void Scr_CombineAngles();
void Scr_IsSubStr();
void Scr_GetSubStr();
void Scr_ToLower();
void Scr_StrTok();
void Scr_MusicPlay();
void Scr_MusicStop();
void Scr_SoundFade();
void Scr_AmbientPlay();
void Scr_AmbientStop();
void Scr_PrecacheModel();
void Scr_PrecacheShellShock();
void Scr_PrecacheItem();
void Scr_PrecacheShader();
void Scr_PrecacheString();
void Scr_PrecacheRumble();
void Scr_LoadFX();
void Scr_PlayFX();
void Scr_PlayFXOnTag();
void Scr_PlayLoopedFX();
void Scr_SpawnFX();
void Scr_TriggerFX();
void Scr_PhysicsExplosionSphere();
void Scr_PhysicsExplosionCylinder();
void Scr_PhysicsRadiusJolt();
void Scr_PhysicsRadiusJitter();
void Scr_SetExponentialFog();
void Scr_GrenadeExplosionEffect();
void GScr_RadiusDamage();
void GScr_SetPlayerIgnoreRadiusDamage();
void GScr_GetNumParts();
void GScr_GetPartName();
void GScr_Earthquake();
void GScr_NewHudElem();
void GScr_NewClientHudElem();
void GScr_NewTeamHudElem();
void Scr_ResetTimeout();
void GScr_WeaponFireTime();
void GScr_IsWeaponClipOnly();
void GScr_WeaponFireTime();
void GScr_WeaponClipSize();
void GScr_WeaponIsSemiAuto();
void GScr_WeaponIsBoltAction();
void GScr_WeaponType();
void GScr_WeaponClass();
void GScr_WeaponInventoryType();
void GScr_WeaponStartAmmo();
void GScr_WeaponMaxAmmo();
void GScr_WeaponAltWeaponName();
void GScr_IsPlayer();
void GScr_IsPlayerNumber();
void GScr_SetWinningPlayer();
void GScr_SetWinningTeam();
void GScr_Announcement();
void GScr_ClientAnnouncement();
void GScr_GetTeamScore();
void GScr_SetTeamScore();
void GScr_SetClientNameMode();
void GScr_UpdateClientNames();
void GScr_GetTeamPlayersAlive();
void GScr_Objective_Team();
void GScr_LogPrint();
void GScr_WorldEntNumber();
void GScr_Obituary();
void GScr_positionWouldTelefrag();
void GScr_getStartTime();
void GScr_PrecacheMenu();
void GScr_PrecacheStatusIcon();
void GScr_PrecacheHeadIcon();
void GScr_PrecacheLocationSelector();
void GScr_MapRestart();
void GScr_ExitLevel();
void GScr_AddTestClient();
void GScr_MakeDvarServerInfo();
void GScr_SetArchive();
void GScr_AllClientsPrint();
void GScr_ClientPrint();
void GScr_MapExists();
void GScr_IsValidGameType();
void GScr_MatchEnd();
void GScr_SetPlayerTeamRank();
void GScr_SendXboxLiveRanks();
void GScr_EndXboxLiveLobby();
void GScr_SetTeamRadar();
void GScr_GetTeamRadar();
void GScr_GetAssignedTeam();
void GScr_SetVoteString();
void GScr_SetVoteTime();
void GScr_SetVoteYesCount();
void GScr_SetVoteNoCount();
void GScr_OpenFile();
void GScr_CloseFile();
void GScr_FPrintln();
void GScr_FPrintFields();
void GScr_FReadLn();
void GScr_FGetArg();
void GScr_KickPlayer();
void GScr_BanPlayer();
void GScr_LoadMap();
void Scr_PlayRumbleOnPosition();
void Scr_PlayRumbleLoopOnPosition();
void Scr_StopAllRumbles();
void ScrCmd_SoundExists();
void Scr_IsSplitscreen();
void GScr_SetMiniMap();
void GScr_SetMapCenter();
void GScr_SetGameEndTime();
void GScr_GetArrayKeys();
void GScr_SearchForOnlineGames();
void GScr_QuitLobby();
void GScr_QuitParty();
void GScr_StartParty();
void GScr_StartPrivateMatch();
void Scr_LogString();
void Scr_VisionSetNaked();
void Scr_VisionSetNight();
void Scr_TableLookup();
void Scr_TableLookupIString();
void GScr_EndLobby();
void GScr_IsWeaponDetonationTimed();
void CMD_Heli_FreeHelicopter(scr_entref_t entref);
void CMD_VEH_SetSpeed(scr_entref_t entref);
void CMD_VEH_GetSpeed(scr_entref_t entref);
void CMD_VEH_GetSpeedMPH(scr_entref_t entref);
void CMD_VEH_ResumeSpeed(scr_entref_t entref);
void CMD_VEH_SetYawSpeed(scr_entref_t entref);
void CMD_VEH_SetMaxPitchRoll(scr_entref_t entref);
void CMD_VEH_SetTurningAbility(scr_entref_t entref);
void CMD_VEH_SetAirResitance(scr_entref_t entref);
void CMD_VEH_SetHoverParams(scr_entref_t entref);
void CMD_VEH_NearGoalNotifyDist(scr_entref_t entref);
void CMD_VEH_SetGoalPos(scr_entref_t entref);
void CMD_VEH_SetGoalYaw(scr_entref_t entref);
void CMD_VEH_ClearGoalYaw(scr_entref_t entref);
void CMD_VEH_SetTargetYaw(scr_entref_t entref);
void CMD_VEH_ClearTargetYaw(scr_entref_t entref);
void CMD_VEH_SetLookAtEnt(scr_entref_t entref);
void CMD_VEH_ClearLookAtEnt(scr_entref_t entref);
void CMD_VEH_SetWeapon(scr_entref_t entref);
void CMD_VEH_FireWeapon(scr_entref_t entref);
void CMD_VEH_SetTurretTargetVec(scr_entref_t entref);
void CMD_VEH_SetTurretTargetEnt(scr_entref_t entref);
void CMD_VEH_ClearTurretTargetEnt(scr_entref_t entref);
void CMD_VEH_SetVehicleTeam(scr_entref_t entref);
void CMD_Heli_SetDamageStage(scr_entref_t entref);
void ScrCmd_attach(scr_entref_t entref);
void ScrCmd_detach(scr_entref_t entref);
void ScrCmd_detachAll(scr_entref_t entref);
void ScrCmd_GetAttachSize(scr_entref_t entref);
void ScrCmd_GetAttachModelName(scr_entref_t entref);
void ScrCmd_GetAttachTagName(scr_entref_t entref);
void ScrCmd_GetAttachIgnoreCollision(scr_entref_t entref);
void GScr_GetAmmoCount(scr_entref_t entref);
void ScrCmd_GetClanId(scr_entref_t entref);
void ScrCmd_GetClanName(scr_entref_t entref);
void ScrCmd_hidepart(scr_entref_t entref);
void ScrCmd_showpart(scr_entref_t entref);
void ScrCmd_showallparts(scr_entref_t entref);
void ScrCmd_LinkTo(scr_entref_t entref);
void ScrCmd_Unlink(scr_entref_t entref);
void ScrCmd_EnableLinkTo(scr_entref_t entref);
void ScrCmd_GetOrigin(scr_entref_t entref);
void ScrCmd_GetEye(scr_entref_t entref);
void ScrCmd_UseBy(scr_entref_t entref);
void Scr_SetStableMissile(scr_entref_t entref);
void ScrCmd_IsTouching(scr_entref_t entref);
void ScrCmd_PlaySound(scr_entref_t entref);
void ScrCmd_PlaySoundAsMaster(scr_entref_t entref);
void ScrCmd_PlaySoundToTeam(scr_entref_t entref);
void ScrCmd_PlaySoundToPlayer(scr_entref_t entref);
void ScrCmd_PlayLoopSound(scr_entref_t entref);
void ScrCmd_StopLoopSound(scr_entref_t entref);
void ScrCmd_PlayRumbleOnEntity(scr_entref_t entref);
void ScrCmd_PlayRumbleLoopOnEntity(scr_entref_t entref);
void ScrCmd_StopRumble(scr_entref_t entref);
void ScrCmd_Delete(scr_entref_t entref);
void ScrCmd_SetModel(scr_entref_t entref);
void ScrCmd_GetNormalHealth(scr_entref_t entref);
void ScrCmd_SetNormalHealth(scr_entref_t entref);
void ScrCmd_Show(scr_entref_t entref);
void ScrCmd_Hide(scr_entref_t entref);
void ScrCmd_LaserOn(scr_entref_t entref);
void ScrCmd_LaserOff(scr_entref_t entref);
void ScrCmd_ShowToPlayer(scr_entref_t entref);
void ScrCmd_SetContents(scr_entref_t entref);
void ScrCmd_GetStance(scr_entref_t entref);
void ScrCmd_LogString(scr_entref_t entref);
void GScr_SetCursorHint(scr_entref_t entref);
void GScr_SetHintString(scr_entref_t entref);
void GScr_UseTriggerRequireLookAt(scr_entref_t entref);
void GScr_ShellShock(scr_entref_t entref);
void GScr_GetTagOrigin(scr_entref_t entref);
void GScr_GetTagAngles(scr_entref_t entref);
void GScr_StopShellShock(scr_entref_t entref);
void GScr_SetDepthOfField(scr_entref_t entref);
void GScr_ViewKick(scr_entref_t entref);
void GScr_LocalToWorldCoords(scr_entref_t entref);
void GScr_SetRightArc(scr_entref_t entref);
void GScr_SetLeftArc(scr_entref_t entref);
void GScr_SetTopArc(scr_entref_t entref);
void GScr_SetBottomArc(scr_entref_t entref);
void GScr_EntityRadiusDamage(scr_entref_t entref);
void GScr_Detonate(scr_entref_t entref);
void GScr_DamageConeTrace(scr_entref_t entref);
void GScr_SightConeTrace(scr_entref_t entref);
void GScr_GetEntityNumber(scr_entref_t entref);
void GScr_EnableGrenadeTouchDamage(scr_entref_t entref);
void GScr_DisableGrenadeTouchDamage(scr_entref_t entref);
void GScr_EnableAimAssist(scr_entref_t entref);
void GScr_DisableAimAssist(scr_entref_t entref);
void GScr_PlaceSpawnPoint(scr_entref_t entref);
void PlayerCmd_UpdateScores(scr_entref_t entref);
void GScr_SetTeamForTrigger(scr_entref_t entref);
void GScr_ClientClaimTrigger(scr_entref_t entref);
void GScr_ClientReleaseTrigger(scr_entref_t entref);
void GScr_ReleaseClaimedTrigger(scr_entref_t entref);
void GScr_GetStat(scr_entref_t entref);
void GScr_SetStat(scr_entref_t entref);
void GScr_SendLeaderboards(scr_entref_t entref);
void ScrCmd_SetMoveSpeedScale(scr_entref_t entref);
void GScr_MissileSetTarget(scr_entref_t entref);
void GScr_StartRagdoll(scr_entref_t entref);
void GScr_IsRagdoll(scr_entref_t entref);
void GScr_GetCorpseAnim(scr_entref_t entref);
void GScr_IsOnLadder(scr_entref_t entref);
void GScr_IsMantling(scr_entref_t entref);
void ScrCmd_ItemWeaponSetAmmo(scr_entref_t entref);
void HECmd_SetText(scr_entref_t entref);
void HECmd_ClearAllTextAfterHudElem(scr_entref_t entref);
void HECmd_SetMaterial(scr_entref_t entref);
void HECmd_SetTimer(scr_entref_t entref);
void HECmd_SetTimerUp(scr_entref_t entref);
void HECmd_SetTenthsTimer(scr_entref_t entref);
void HECmd_SetTenthsTimerUp(scr_entref_t entref);
void HECmd_SetClock(scr_entref_t entref);
void HECmd_SetClockUp(scr_entref_t entref);
void HECmd_SetValue(scr_entref_t entref);
void HECmd_SetWaypoint(scr_entref_t entref);
void HECmd_FadeOverTime(scr_entref_t entref);
void HECmd_ScaleOverTime(scr_entref_t entref);
void HECmd_MoveOverTime(scr_entref_t entref);
void HECmd_Reset(scr_entref_t entref);
void HECmd_Destroy(scr_entref_t entref);
void HECmd_SetPulseFX(scr_entref_t entref);
void HECmd_SetPlayerNameString(scr_entref_t entref);
void HECmd_SetMapNameString(scr_entref_t entref);
void HECmd_SetGameTypeString(scr_entref_t entref);
void HECmd_ClearTargetEnt(scr_entref_t entref);
void HECmd_SetTargetEnt(scr_entref_t entref);
void ScriptEntCmd_MoveTo(scr_entref_t entref);
void ScriptEntCmd_MoveX(scr_entref_t entref);
void ScriptEntCmd_MoveY(scr_entref_t entref);
void ScriptEntCmd_MoveZ(scr_entref_t entref);
void ScriptEntCmd_GravityMove(scr_entref_t entref);
void ScriptEntCmd_RotateTo(scr_entref_t entref);
void ScriptEntCmd_RotatePitch(scr_entref_t entref);
void ScriptEntCmd_RotateYaw(scr_entref_t entref);
void ScriptEntCmd_RotateRoll(scr_entref_t entref);
void ScriptEntCmd_DevAddPitch(scr_entref_t entref);
void ScriptEntCmd_DevAddYaw(scr_entref_t entref);
void ScriptEntCmd_DevAddRoll(scr_entref_t entref);
void ScriptEntCmd_Vibrate(scr_entref_t entref);
void ScriptEntCmd_RotateVelocity(scr_entref_t entref);
void ScriptEntCmd_Solid(scr_entref_t entref);
void ScriptEntCmd_NotSolid(scr_entref_t entref);
void ScriptEntCmd_SetCanDamage(scr_entref_t entref);
void ScriptEntCmd_PhysicsLaunch(scr_entref_t entref);
void PlayerCmd_giveWeapon(scr_entref_t entref);
void PlayerCmd_takeWeapon(scr_entref_t entref);
void PlayerCmd_takeAllWeapons(scr_entref_t entref);
void PlayerCmd_getCurrentWeapon(scr_entref_t entref);
void PlayerCmd_getCurrentOffhand(scr_entref_t entref);
void PlayerCmd_hasWeapon(scr_entref_t entref);
void PlayerCmd_switchToWeapon(scr_entref_t entref);
void PlayerCmd_switchToOffhand(scr_entref_t entref);
void PlayerCmd_giveStartAmmo(scr_entref_t entref);
void PlayerCmd_giveMaxAmmo(scr_entref_t entref);
void PlayerCmd_getFractionStartAmmo(scr_entref_t entref);
void PlayerCmd_getFractionMaxAmmo(scr_entref_t entref);
void PlayerCmd_setOrigin(scr_entref_t entref);
void PlayerCmd_GetVelocity(scr_entref_t entref);
void PlayerCmd_setAngles(scr_entref_t entref);
void PlayerCmd_getAngles(scr_entref_t entref);
void PlayerCmd_useButtonPressed(scr_entref_t entref);
void PlayerCmd_attackButtonPressed(scr_entref_t entref);
void PlayerCmd_meleeButtonPressed(scr_entref_t entref);
void PlayerCmd_fragButtonPressed(scr_entref_t entref);
void PlayerCmd_secondaryOffhandButtonPressed(scr_entref_t entref);
void PlayerCmd_playerADS(scr_entref_t entref);
void PlayerCmd_isOnGround(scr_entref_t entref);
void PlayerCmd_pingPlayer(scr_entref_t entref);
void PlayerCmd_SetViewmodel(scr_entref_t entref);
void PlayerCmd_GetViewmodel(scr_entref_t entref);
void PlayerCmd_setOffhandSecondaryClass(scr_entref_t entref);
void PlayerCmd_getOffhandSecondaryClass(scr_entref_t entref);
void PlayerCmd_BeginLocationSelection(scr_entref_t entref);
void PlayerCmd_EndLocationSelection(scr_entref_t entref);
void PlayerCmd_buttonPressedDEVONLY(scr_entref_t entref);
void PlayerCmd_SayAll(scr_entref_t entref);
void PlayerCmd_SayTeam(scr_entref_t entref);
void PlayerCmd_showScoreboard(scr_entref_t entref);
void PlayerCmd_setSpawnWeapon(scr_entref_t entref);
void PlayerCmd_dropItem(scr_entref_t entref);
void PlayerCmd_finishPlayerDamage(scr_entref_t entref);
void PlayerCmd_Suicide(scr_entref_t entref);
void PlayerCmd_OpenMenu(scr_entref_t entref);
void PlayerCmd_OpenMenuNoMouse(scr_entref_t entref);
void PlayerCmd_CloseMenu(scr_entref_t entref);
void PlayerCmd_CloseInGameMenu(scr_entref_t entref);
void PlayerCmd_FreezeControls(scr_entref_t entref);
void PlayerCmd_DisableWeapons(scr_entref_t entref);
void PlayerCmd_EnableWeapons(scr_entref_t entref);
void PlayerCmd_SetReverb(scr_entref_t entref);
void PlayerCmd_DeactivateReverb(scr_entref_t entref);
void PlayerCmd_SetChannelVolumes(scr_entref_t entref);
void PlayerCmd_DeactivateChannelVolumes(scr_entref_t entref);
void PlayerCmd_SetWeaponAmmoClip(scr_entref_t entref);
void PlayerCmd_SetWeaponAmmoStock(scr_entref_t entref);
void PlayerCmd_GetWeaponAmmoClip(scr_entref_t entref);
void PlayerCmd_GetWeaponAmmoStock(scr_entref_t entref);
void PlayerCmd_AnyAmmoForWeaponModes(scr_entref_t entref);
void iclientprintln(scr_entref_t entref);
void iclientprintlnbold(scr_entref_t entref);
void PlayerCmd_spawn(scr_entref_t entref);
void PlayerCmd_setEnterTime(scr_entref_t entref);
void PlayerCmd_ClonePlayer(scr_entref_t entref);
void PlayerCmd_SetClientDvar(scr_entref_t entref);
void PlayerCmd_SetClientDvars(scr_entref_t entref);
void ScrCmd_PlayLocalSound(scr_entref_t entref);
void ScrCmd_StopLocalSound(scr_entref_t entref);
void PlayerCmd_IsTalking(scr_entref_t entref);
void PlayerCmd_AllowSpectateTeam(scr_entref_t entref);
void PlayerCmd_GetGuid(scr_entref_t entref);
void PlayerCmd_AllowADS(scr_entref_t entref);
void PlayerCmd_AllowJump(scr_entref_t entref);
void PlayerCmd_AllowSprint(scr_entref_t entref);
void PlayerCmd_SetSpreadOverride(scr_entref_t entref);
void PlayerCmd_ResetSpreadOverride(scr_entref_t entref);
void PlayerCmd_SetActionSlot(scr_entref_t entref);
void PlayerCmd_GetWeaponsList(scr_entref_t entref);
void PlayerCmd_GetWeaponsListPrimaries(scr_entref_t entref);
void PlayerCmd_SetPerk(scr_entref_t entref);
void PlayerCmd_HasPerk(scr_entref_t entref);
void PlayerCmd_ClearPerks(scr_entref_t entref);
void PlayerCmd_UnsetPerk(scr_entref_t entref);
void PlayerCmd_SetRank(scr_entref_t entref);
void PlayerCmd_adsButtonPressed(scr_entref_t entref);
void PlayerCmd_UpdateDMScores(scr_entref_t entref);
void GScr_Float();
void GScr_Base64Encode();
void GScr_Base64Decode();
void GScr_IsEntity();
void GScr_IsVector();
void GScr_IsString();
void GScr_IsFloat();
void GScr_IsInt();
void GScr_Pow();

void GScr_CloneBrushModelToScriptModel(scr_entref_t brushModelEnt);
void PlayerCmd_SetStance(scr_entref_t playerEntNum);
