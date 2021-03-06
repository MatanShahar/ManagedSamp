#include "Api.h"

typedef void (__cdecl *TimerCallback)(int timerid, void *param);

INLINE_API_CALL bool Api_SendClientMessage(int playerid, int color, const char *message);
INLINE_API_CALL bool Api_SendClientMessageToAll(int color, const char *message);
INLINE_API_CALL bool Api_SendPlayerMessageToPlayer(int playerid, int senderid, const char *message);
INLINE_API_CALL bool Api_SendPlayerMessageToAll(int senderid, const char *message);
INLINE_API_CALL bool Api_SendDeathMessage(int killer, int killee, int weapon);
INLINE_API_CALL bool Api_SendDeathMessageToPlayer(int playerid, int killer, int killee, int weapon);
INLINE_API_CALL bool Api_GameTextForAll(const char *text, int time, int style);
INLINE_API_CALL bool Api_GameTextForPlayer(int playerid, const char *text, int time, int style);
INLINE_API_CALL int Api_GetTickCount();
INLINE_API_CALL int Api_GetMaxPlayers();
INLINE_API_CALL float Api_VectorSize(float x, float y, float z);
INLINE_API_CALL bool Api_SetGameModeText(const char *text);
INLINE_API_CALL bool Api_SetTeamCount(int count);
INLINE_API_CALL int Api_AddPlayerClass(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo);
INLINE_API_CALL int Api_AddPlayerClassEx(int teamid, int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo);
INLINE_API_CALL int Api_AddStaticVehicle(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int color1, int color2);
INLINE_API_CALL int Api_AddStaticVehicleEx(int modelid, float spawn_x, float spawn_y, float spawn_z, float z_angle, int color1, int color2, int respawn_delay);
INLINE_API_CALL int Api_AddStaticPickup(int model, int type, float x, float y, float z, int virtualworld);
INLINE_API_CALL int Api_CreatePickup(int model, int type, float x, float y, float z, int virtualworld);
INLINE_API_CALL bool Api_DestroyPickup(int pickup);
INLINE_API_CALL bool Api_ShowNameTags(bool show);
INLINE_API_CALL bool Api_ShowPlayerMarkers(int mode);
INLINE_API_CALL bool Api_GameModeExit();
INLINE_API_CALL bool Api_SetWorldTime(int hour);
INLINE_API_CALL bool Api_GetWeaponName(int weaponid, char *name, int size);
INLINE_API_CALL bool Api_EnableTirePopping(bool enable);
INLINE_API_CALL bool Api_EnableVehicleFriendlyFire();
INLINE_API_CALL bool Api_AllowInteriorWeapons(bool allow);
INLINE_API_CALL bool Api_SetWeather(int weatherid);
INLINE_API_CALL bool Api_SetGravity(float gravity);
INLINE_API_CALL bool Api_AllowAdminTeleport(bool allow);
INLINE_API_CALL bool Api_SetDeathDropAmount(int amount);
INLINE_API_CALL bool Api_CreateExplosion(float x, float y, float z, int type, float radius);
INLINE_API_CALL bool Api_EnableZoneNames(bool enable);
INLINE_API_CALL bool Api_UsePlayerPedAnims();
INLINE_API_CALL bool Api_DisableInteriorEnterExits();
INLINE_API_CALL bool Api_SetNameTagDrawDistance(float distance);
INLINE_API_CALL bool Api_DisableNameTagLOS();
INLINE_API_CALL bool Api_LimitGlobalChatRadius(float chat_radius);
INLINE_API_CALL bool Api_LimitPlayerMarkerRadius(float marker_radius);
INLINE_API_CALL bool Api_ConnectNPC(const char *name, const char *script);
INLINE_API_CALL bool Api_IsPlayerNPC(int playerid);
INLINE_API_CALL bool Api_IsPlayerAdmin(int playerid);
INLINE_API_CALL bool Api_Kick(int playerid);
INLINE_API_CALL bool Api_Ban(int playerid);
INLINE_API_CALL bool Api_BanEx(int playerid, const char *reason);
INLINE_API_CALL bool Api_SendRconCommand(const char *command);
INLINE_API_CALL bool Api_GetServerVarAsString(const char *varname, char *value, int size);
INLINE_API_CALL int Api_GetServerVarAsInt(const char *varname);
INLINE_API_CALL bool Api_GetServerVarAsBool(const char *varname);
INLINE_API_CALL bool Api_GetPlayerNetworkStats(int playerid, char *retstr, int size);
INLINE_API_CALL bool Api_GetNetworkStats(char *retstr, int size);
INLINE_API_CALL bool Api_GetPlayerVersion(int playerid, char *version, int len);
INLINE_API_CALL bool Api_BlockIpAddress(const char *ip_address, int timems);
INLINE_API_CALL bool Api_UnBlockIpAddress(const char *ip_address);
INLINE_API_CALL int Api_GetServerTickRate();
INLINE_API_CALL int Api_NetStats_GetConnectedTime(int playerid);
INLINE_API_CALL int Api_NetStats_MessagesReceived(int playerid);
INLINE_API_CALL int Api_NetStats_BytesReceived(int playerid);
INLINE_API_CALL int Api_NetStats_MessagesSent(int playerid);
INLINE_API_CALL int Api_NetStats_BytesSent(int playerid);
INLINE_API_CALL int Api_NetStats_MessagesRecvPerSecond(int playerid);
INLINE_API_CALL float Api_NetStats_PacketLossPercent(int playerid);
INLINE_API_CALL int Api_NetStats_ConnectionStatus(int playerid);
INLINE_API_CALL bool Api_NetStats_GetIpPort(int playerid, char *ip_port, int ip_port_len);
INLINE_API_CALL int Api_CreateMenu(const char *title, int columns, float x, float y, float col1width, float col2width);
INLINE_API_CALL bool Api_DestroyMenu(int menuid);
INLINE_API_CALL int Api_AddMenuItem(int menuid, int column, const char *menutext);
INLINE_API_CALL bool Api_SetMenuColumnHeader(int menuid, int column, const char *columnheader);
INLINE_API_CALL bool Api_ShowMenuForPlayer(int menuid, int playerid);
INLINE_API_CALL bool Api_HideMenuForPlayer(int menuid, int playerid);
INLINE_API_CALL bool Api_IsValidMenu(int menuid);
INLINE_API_CALL bool Api_DisableMenu(int menuid);
INLINE_API_CALL bool Api_DisableMenuRow(int menuid, int row);
INLINE_API_CALL int Api_GetPlayerMenu(int playerid);
INLINE_API_CALL int Api_TextDrawCreate(float x, float y, const char *text);
INLINE_API_CALL bool Api_TextDrawDestroy(int text);
INLINE_API_CALL bool Api_TextDrawLetterSize(int text, float x, float y);
INLINE_API_CALL bool Api_TextDrawTextSize(int text, float x, float y);
INLINE_API_CALL bool Api_TextDrawAlignment(int text, int alignment);
INLINE_API_CALL bool Api_TextDrawColor(int text, int color);
INLINE_API_CALL bool Api_TextDrawUseBox(int text, bool use);
INLINE_API_CALL bool Api_TextDrawBoxColor(int text, int color);
INLINE_API_CALL bool Api_TextDrawSetShadow(int text, int size);
INLINE_API_CALL bool Api_TextDrawSetOutline(int text, int size);
INLINE_API_CALL bool Api_TextDrawBackgroundColor(int text, int color);
INLINE_API_CALL bool Api_TextDrawFont(int text, int font);
INLINE_API_CALL bool Api_TextDrawSetProportional(int text, bool set);
INLINE_API_CALL bool Api_TextDrawSetSelectable(int text, bool set);
INLINE_API_CALL bool Api_TextDrawShowForPlayer(int playerid, int text);
INLINE_API_CALL bool Api_TextDrawHideForPlayer(int playerid, int text);
INLINE_API_CALL bool Api_TextDrawShowForAll(int text);
INLINE_API_CALL bool Api_TextDrawHideForAll(int text);
INLINE_API_CALL bool Api_TextDrawSetString(int text, const char *string);
INLINE_API_CALL bool Api_TextDrawSetPreviewModel(int text, int modelindex);
INLINE_API_CALL bool Api_TextDrawSetPreviewRot(int text, float fRotX, float fRotY, float fRotZ, float fZoom);
INLINE_API_CALL bool Api_TextDrawSetPreviewVehCol(int text, int color1, int color2);
INLINE_API_CALL bool Api_SelectTextDraw(int playerid, int hovercolor);
INLINE_API_CALL bool Api_CancelSelectTextDraw(int playerid);
INLINE_API_CALL int Api_GangZoneCreate(float minx, float miny, float maxx, float maxy);
INLINE_API_CALL bool Api_GangZoneDestroy(int zone);
INLINE_API_CALL bool Api_GangZoneShowForPlayer(int playerid, int zone, int color);
INLINE_API_CALL bool Api_GangZoneShowForAll(int zone, int color);
INLINE_API_CALL bool Api_GangZoneHideForPlayer(int playerid, int zone);
INLINE_API_CALL bool Api_GangZoneHideForAll(int zone);
INLINE_API_CALL bool Api_GangZoneFlashForPlayer(int playerid, int zone, int flashcolor);
INLINE_API_CALL bool Api_GangZoneFlashForAll(int zone, int flashcolor);
INLINE_API_CALL bool Api_GangZoneStopFlashForPlayer(int playerid, int zone);
INLINE_API_CALL bool Api_GangZoneStopFlashForAll(int zone);
INLINE_API_CALL int Api_Create3DTextLabel(const char *text, int color, float x, float y, float z, float DrawDistance, int virtualworld, bool testLOS);
INLINE_API_CALL bool Api_Delete3DTextLabel(int id);
INLINE_API_CALL bool Api_Attach3DTextLabelToPlayer(int id, int playerid, float OffsetX, float OffsetY, float OffsetZ);
INLINE_API_CALL bool Api_Attach3DTextLabelToVehicle(int id, int vehicleid, float OffsetX, float OffsetY, float OffsetZ);
INLINE_API_CALL bool Api_Update3DTextLabelText(int id, int color, const char *text);
INLINE_API_CALL int Api_CreatePlayer3DTextLabel(int playerid, const char *text, int color, float x, float y, float z, float DrawDistance, int attachedplayer, int attachedvehicle, bool testLOS);
INLINE_API_CALL bool Api_DeletePlayer3DTextLabel(int playerid, int id);
INLINE_API_CALL bool Api_UpdatePlayer3DTextLabelText(int playerid, int id, int color, const char *text);
INLINE_API_CALL bool Api_ShowPlayerDialog(int playerid, int dialogid, int style, const char *caption, const char *info, const char *button1, const char *button2);
INLINE_API_CALL int Api_SetTimer(int interval, bool repeat, TimerCallback callback, void *param);
INLINE_API_CALL bool Api_KillTimer(int timerid);
INLINE_API_CALL bool Api_gpci(int playerid, char *buffer, int size);
