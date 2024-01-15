#region Local Var
    int iLocal_0 = 0;
    var uLocal_1 = 0;
    var uLocal_2 = 0;
    var uLocal_3 = 0;
    var uLocal_4 = 0;
    var uLocal_5 = 0;
    var uLocal_6 = 0;
    var uLocal_7 = 0;
    var uLocal_8 = 0;
    var uLocal_9 = 0;
    var uLocal_10 = 0;
    var uLocal_11 = 0;
    var uLocal_12 = 0;
    var uLocal_13 = 0;
    var uLocal_14 = 0;
    var uLocal_15 = 0;
    var uLocal_16 = 0;
    int iLocal_17 = 0;
    int iLocal_18 = 1;
    int iLocal_19 = 1;
    int iLocal_20 = 1;
    int iLocal_21 = 0;
    int iLocal_22 = 0;
    int iLocal_23 = 0;
    int iLocal_24 = 0;
    int iLocal_25 = 0;
    int iLocal_26 = 0;
    float fLocal_27 = 0.0f;
    float fLocal_28 = 0.0f;
    int iLocal_29 = 0;
    char* cLocal_30[252] = "";
    var uLocal_93 = 0;
    var uLocal_94 = 0;
    var uLocal_95 = 0;
    var uLocal_96 = 0;
    char* cLocal_97 = NULL;
    bool bLocal_98 = false;
    char* cLocal_99 = NULL;
    int iLocal_100 = 1;
    var uLocal_101 = 1;
    var uLocal_102 = 1;
    var uLocal_103 = 1;
    var uLocal_104 = 1;
    int iLocal_105 = 0;
    int iLocal_106 = 1;
    var uLocal_107 = 1;
    var uLocal_108 = 1;
    var uLocal_109 = 1;
    var uLocal_110 = 1;
    bool bLocal_111 = true;
    int iLocal_112 = 0;
    int iLocal_113 = 0;
    var uLocal_114 = -33554432;
    var uLocal_115 = 0;
    int iLocal_116 = 0;
    int iLocal_117 = 0;
    bool bLocal_118 = false;
    bool bLocal_119 = true;
    int iLocal_120 = 1;
#endregion

void MainFunction() //Position - 0x0
{
    iLocal_25 = 1450;
    cLocal_97 = "<grey>";
    cLocal_99 = "<purple>";
    main();
    return;
}

void DrawMenu() //Position - 0x2B
{
    int iVar0;
    var uVar1;
    int iVar2;
    
    if (iLocal_17 == 0)
    {
        return;
    }
    HUD_CLEAR_HELP_QUEUE();
    Call_Loc(iLocal_25);
    HandleMenuInput();
    stradd(&cLocal_33, " \n<red>(", 255);
    straddi(&cLocal_33, iLocal_18, 255);
    stradd(&cLocal_33, "/", 255);
    straddi(&cLocal_33, (iLocal_19 - 1), 255);
    stradd(&cLocal_33, ")", 255);
    _PRINT_HELP(&cLocal_33, 1.0f, 0, 2, 1, 0, 0, 0);
    iLocal_19 = 1;
    iVar0 = &cLocal_33;
    uVar1 = SHIFT_LEFT(0, 24);
    iVar2 = 256;
    if (0 >= iVar2)
    {
        *iVar0 = (uVar1 || *iVar0 & 16777215);
        iVar0++;
    }
else
{
    }
}

void SetHeader(char* cParam0) //Position - 0xBC
{
    iLocal_26 = (iLocal_26 + 0.5f);
    if (iLocal_26 == 360.0f)
    {
        iLocal_26 = 0.0f;
    }
    HSVtoRGB(&fLocal_27, &fLocal_28, &iLocal_29, &iLocal_26, &cLocal_30, &cLocal_31);
    cLocal_32 = ((FloatToInt((iLocal_29 * 255.0f)) & 255 || SHIFT_LEFT(FloatToInt((fLocal_28 * 255.0f)) & 255, 8)) || SHIFT_LEFT(FloatToInt((fLocal_27 * 255.0f)) & 255, 16));
    stradd(&cLocal_33, "<0x", 255);
    stradd(&cLocal_33, (IntToHex(cLocal_32, 0) + 2), 255);
    stradd(&cLocal_33, ">", 255);
    stradd(&cLocal_33, cParam0, 255);
    stradd(&cLocal_33, cLocal_97, 255);
    stradd(&cLocal_33, " ", 255);
    return;
}

void AddItem(var uParam0, var uParam1, var uParam2, var uParam3) //Position - 0x15A
{
    AddBaseItem(uParam0, uParam1, uParam2, uParam3, 0);
}

void AddSubmenu(var uParam0, int iParam1, int iParam2) //Position - 0x176
{
    AddBaseItem(uParam0, iParam1, iParam2, "", 1);
    return;
}

void AddBoolItem(var uParam0, var uParam1, char* cParam2, char* cParam3, bool bParam4) //Position - 0x198
{
    if (AddBaseItem(uParam0, uParam1, cParam2, cParam3, 0))
    {
        if (bParam4)
        {
            stradd(&cLocal_33, ": <green>On", 255);
        }
        else
        {
            stradd(&cLocal_33, ": <red>Off", 255);
        }
        stradd(&cLocal_33, cLocal_97, 255);
    }
}

void print(int iParam0, int iParam1) //Position - 0x1EB
{
    _CLEAR_PRINTS();
    if (iParam1 != 0)
    {
    }
else
{
    }
    _PRINT_SUBTITLE((IntToFloat(iParam1) / 1000.0f), 0.0f, 1, 2, 1, 0, 0, 0);
    return;
}

var IntToHex(var uParam0, bool bParam1) //Position - 0x21C
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    if (bParam1)
    {
        iVar0 = "0123456789ABCDEF";
    }
    else
    {
        iVar0 = "0123456789abcdef";
    }
    iVar1 = &uParam0;
    iVar2 = "n         ";
    iVar3 = 0;
    if (iVar3 < 4)
    {
        if (Stack.Peek() <= 127)
        {
        }
        *((iVar2 + (iVar3 * 2))) = (SHIFT_LEFT(SHIFT_RIGHT(*((iVar0 + SHIFT_RIGHT(SHIFT_RIGHT(*((iVar1 + iVar3)), 24), 4) & 15)), 24) | -16777216, 24) || *((iVar2 + (iVar3 * 2))) & 16777215);
        if (Stack.Peek() <= 127)
        {
        }
        *((iVar2 + ((iVar3 * 2) + 1))) = (SHIFT_LEFT(SHIFT_RIGHT(*((iVar0 + SHIFT_RIGHT(*((iVar1 + iVar3)), 24) & 15)), 24) | -16777216, 24) || *((iVar2 + ((iVar3 * 2) + 1))) & 16777215);
        iVar3++;
        if (!iVar3 < 4)
        {
            *(iVar2 + 8) = (SHIFT_LEFT(0, 24) || *(iVar2 + 8) & 16777215);
            return iVar2;
        }
    }
}

void HandleInput() //Position - 0x322
{
    if (IS_BUTTON_DOWN(1, 1, 4, 4))
    {
        if (IS_BUTTON_PRESSED(1, 4, 4, 4))
        {
            if (iLocal_17)
            {
                iLocal_17 = 0;
            }
            else
            {
                iLocal_17 = 1;
            }
        }
    }
    return;
}

void HandleMenuInput() //Position - 0x357
{
    if (IS_BUTTON_PRESSED(1, 14, 4, 4))
    {
        if (iLocal_18 < (iLocal_19 - 1))
        {
            iLocal_18++;
            if (iLocal_18 > (iLocal_20 + 6))
            {
                iLocal_20++;
            }
            PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
        }
        iLocal_21 = 0;
        iLocal_22 = 0;
    }
    if (IS_BUTTON_PRESSED(1, 12, 4, 4))
    {
        if (iLocal_18 > 1)
        {
            iLocal_18 += 65535;
            if (iLocal_18 < iLocal_20)
            {
                iLocal_20 += 65535;
            }
            PLAY_SOUND_FRONTEND("HUD_MENU_NAV_DOWN_MASTER");
        }
        iLocal_21 = 0;
        iLocal_22 = 0;
    }
    if (IS_BUTTON_PRESSED(1, 15, 4, 4))
    {
        iLocal_21 = 1;
    }
    if (IS_BUTTON_PRESSED(1, 13, 4, 4))
    {
        iLocal_22 = 1;
    }
    if (IS_BUTTON_PRESSED(1, 6, 4, 4))
    {
        iLocal_23 = 1;
        PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
    }
    if (IS_BUTTON_PRESSED(1, 5, 4, 4))
    {
        iLocal_24 = 1;
        PLAY_SOUND_FRONTEND("HUD_MENU_BACK_MASTER");
    }
    if (!IS_BUTTON_PRESSED(1, 8, 4, 4))
    {
        if (IS_BUTTON_PRESSED(1, 11, 4, 4))
        {
            iLocal_17 = 0;
        }
        return;
    }
}

void HSVtoRGB(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position - 0x48D
{
    float fVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    
    fVar0 = (*uParam5 * *uParam4);
    fVar1 = ((*uParam3 / 60.0f) % 6.0f);
    fVar2 = (fVar0 * (1.0f - FABS(((fVar1 % 2.0f) - 1.0f))));
    fVar3 = (*uParam5 - fVar0);
    if (0.0f <= fVar1)
    {
        if (fVar1 < 1.0f)
        {
            *uParam0 = fVar0;
            *uParam1 = fVar2;
            *uParam2 = 0.0f;
        }
        else if (1.0f <= fVar1)
        {
            if (fVar1 < 2.0f)
            {
                *uParam0 = fVar2;
                *uParam1 = fVar0;
                *uParam2 = 0.0f;
            }
            else if (2.0f <= fVar1)
            {
                if (fVar1 < 3.0f)
                {
                    *uParam0 = 0.0f;
                    *uParam1 = fVar0;
                    *uParam2 = fVar2;
                }
                else if (3.0f <= fVar1)
                {
                    if (fVar1 < 4.0f)
                    {
                        *uParam0 = 0.0f;
                        *uParam1 = fVar2;
                        *uParam2 = fVar0;
                    }
                    else if (4.0f <= fVar1)
                    {
                        if (fVar1 < 5.0f)
                        {
                            *uParam0 = fVar2;
                            *uParam1 = 0.0f;
                            *uParam2 = fVar0;
                        }
                        else if (5.0f <= fVar1)
                        {
                            if (fVar1 < 6.0f)
                            {
                                *uParam0 = fVar0;
                                *uParam1 = 0.0f;
                                *uParam2 = fVar2;
                            }
                            else
                            {
                                *uParam0 = 0.0f;
                                *uParam1 = 0.0f;
                                *uParam2 = 0.0f;
                            }
                            *(uParam0) = (*uParam0 + fVar3);
                            *(uParam1) = (*uParam1 + fVar3);
                            *(uParam2) = (*uParam2 + fVar3);
                        }
                    }
                }
            }
        }
    }
}

void Main() //Position - 0x5AA
{
    *22794328 = RAND_INT_RANGE(1, 255);
    SetHeader("<ROCKSTAR>Yzid Full Anti Freeze v6");
    AddBoolItem("Anti FreezeFull(v6)", 2561, 0, "", bLocal_98);
    AddSubmenu("Network Options", 11343, 0);
    return;
}

void Network_ShowSlot(int iParam0) //Position - 0x627
{
    SetHeader(*((&iLocal_0 + iParam0 * 1 * 4)));
    bLocal_111 = iParam0;
    AddItem("Teleport to", 3655, 11343, "");
    AddItem("FreezePedWep(v6)", 3714, 11343, "");
    return;
}

void Self_ToggleDrunk2() //Position - 0x68B
{
    if (iLocal_117)
    {
        SET_ACTOR_INVULNERABILITY(uLocal_116, 1);
        HOGTIE_ACTOR(uLocal_116);
        if (IS_ACTOR_VALID(uLocal_116))
        {
            iLocal_113 = 0;
        }
        else
        {
            iLocal_113 = 1;
        }
        if (!IS_SLOT_VALID(bLocal_111))
        {
            iLocal_117 = 0;
            iLocal_113 = 0;
        }
    }
    return;
}

void Self_ToggleInvincible() //Position - 0x6D2
{
    var uVar0;
    var uVar3;
    var uVar6;
    var uVar9;
    var uVar10;
    int iVar11;
    char* cVar12[48];
    int iVar25;
    
    if (iLocal_112)
    {
        *13635328 = -389808116;
        *13635332 = -930873328;
        *2504904 = -392298436;
        *7280064 = 1317011488;
        *535480 = 1317011488;
        *538444 = 1317011488;
        *3149652 = 1889279340;
        *13635328 = -389808116;
        uLocal_114 = SHIFT_LEFT(-389808116, 24);
        uVar9 = GET_LAST_ATTACK_TARGET(GET_SLOT_ACTOR(bLocal_111));
        GET_POSITION(GET_LAST_ATTACK_TARGET(GET_PLAYER_ACTOR(0)), &uVar6);
        GET_SLOT_POSITION(bLocal_111, &uVar0);
        GET_OBJECT_NAMED_BONE_POSITION(GET_SLOT_ACTOR(bLocal_111), "head", &uVar3);
        FIRE_PROJECTILE(GET_PLAYER_ACTOR(0), "base_shotgun", 3.0f, &uVar3, &uVar3);
        FIRE_PROJECTILE(GET_PLAYER_ACTOR(0), "base_shotgun", 3.0f, &uVar0, &uVar0);
        FIRE_PROJECTILE(GET_PLAYER_ACTOR(0), "base_shotgun", 3.0f, &uVar6, &uVar6);
        TASK_FOLLOW_ACTOR(uVar9, uVar9);
        uVar10 = GET_SLOT_ACTOR(bLocal_111);
        iVar11 = UNK_0x118D085E(uVar10);
        stradd(&cVar12, "Found ", 50);
        straddi(&cVar12, iVar11, 50);
        stradd(&cVar12, "n matches.", 50);
        iVar25 = 0;
        if (iVar25 < iVar11)
        {
            iVar25++;
            if (!iVar25 < iVar11)
            {
                UNK_0xD695F857(uVar10);
                if (!IS_SLOT_VALID(bLocal_111))
                {
                    *13635328 = -389808120;
                    *13635332 = 948174864;
                    *2504904 = -392298448;
                    *7280064 = -131989631;
                    *535480 = -131989647;
                    *538444 = -131989647;
                    *3149652 = -2137252500;
                    print("<red>hhhhhhhhhh Made By Yzid (_!_)", 11000);
                    iLocal_112 = 0;
                }
                return;
            }
        }
    }
}

void Self_ToggleDrunk() //Position - 0x89F
{
    vector3 vVar0;
    vector3 vVar3;
    
    if (iLocal_113)
    {
        uLocal_115 = GET_OBJECT_FROM_ACTOR(GET_LAST_ATTACK_TARGET(GET_SLOT_ACTOR(bLocal_111)));
        vVar3 = 0.0f;
        *(&vVar3 + 4) = 0.0f;
        *(&vVar3 + 8) = 0.0f;
        STREAMING_REQUEST_ACTOR(2, 1, 0);
        if (!STREAMING_IS_ACTOR_LOADED(2, -1))
        {
            WAIT(0);
            if (STREAMING_IS_ACTOR_LOADED(2, -1))
            {
                GET_SLOT_POSITION(bLocal_111, &vVar0);
                iLocal_116 = CREATE_ACTOR_IN_LAYOUT(UNK_0x51D6DA2C(uLocal_115), "", 2, vVar0, vVar3);
                TASK_FOLLOW_ACTOR(GET_ACTOR_FROM_OBJECT(uLocal_115), GET_SLOT_ACTOR(bLocal_111));
                WAIT(100);
                TASK_FOLLOW_ACTOR(iLocal_116, GET_PLAYER_ACTOR(0));
                SET_ACTOR_INVULNERABILITY(iLocal_116, 1);
                HOGTIE_ACTOR(iLocal_116);
                ACTOR_MOUNT_ACTOR(iLocal_116, GET_ACTOR_FROM_OBJECT(uLocal_115));
                WAIT(500);
                SET_ACTOR_INVULNERABILITY(iLocal_116, 1);
                HOGTIE_ACTOR(iLocal_116);
                ACTOR_MOUNT_ACTOR(GET_ACTOR_FROM_OBJECT(uLocal_115), GET_PLAYER_ACTOR(0));
                WAIT(0);
                iLocal_117 = 1;
                return;
            }
        }
    }
}

void tested1() //Position - 0x976
{
    var uVar0;
    int iVar1;
    char* cVar2[48];
    int iVar15;
    
    if (bLocal_118)
    {
        *535480 = 1317011488;
        *538444 = 1317011488;
        uVar0 = GET_SLOT_ACTOR(bLocal_111);
        iVar1 = UNK_0x118D085E(uVar0);
        stradd(&cVar2, "Found ", 50);
        straddi(&cVar2, iVar1, 50);
        stradd(&cVar2, "n matches.", 50);
        iVar15 = 0;
        if (iVar15 < iVar1)
        {
            iVar15++;
            if (!iVar15 < iVar1)
            {
                UNK_0xD695F857(uVar0);
                Jump @140; //curOff = 117
                *535480 = -131989647;
                *538444 = -131989647;
                return;
            }
        }
    }
}

void Weapon_ToggleAllGold() //Position - 0xA03
{
    if (bLocal_98 == 1)
    {
    }
else
{
    }
    bLocal_98 = 1 != false;
    return;
}

void Weapon_ToggleAllGold1() //Position - 0xA2D
{
    var uVar0;
    var uVar1;
    var uVar2;
    int iVar3;
    char* cVar4[48];
    int iVar17;
    int iVar18;
    int iVar19;
    
    if (bLocal_98)
    {
        uVar0 = GET_OBJECT_FROM_ACTOR(GET_SLOT_ACTOR(bLocal_111));
        uVar1 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("playerlayout"));
        uVar2 = CREATE_OBJECT_ITERATOR(UNK_0x51D6DA2C(uVar0));
        ITERATE_ON_OBJECT_TYPE(uVar1, 15);
        ITERATE_ON_OBJECT_TYPE(uVar2, 15);
        START_OBJECT_ITERATOR(uVar1);
        START_OBJECT_ITERATOR(uVar2);
        iVar3 = (GET_NUM_ITERATOR_MATCHES(uVar1) + GET_NUM_ITERATOR_MATCHES(uVar2));
        stradd(&cVar4, "Found ", 50);
        straddi(&cVar4, iVar3, 50);
        stradd(&cVar4, "n matches.", 50);
        _PRINT_CHAT(&cVar4, 0, 0, 0, 0, 0, 0);
        _PRINT_CHAT("Deleting...", 0, 0, 0, 0, 0, 0);
        iVar17 = 0;
        if (iVar17 < iVar3)
        {
            iVar18 = OBJECT_ITERATOR_CURRENT(uVar1);
            iVar19 = OBJECT_ITERATOR_CURRENT(uVar2);
            if (iVar18 != GET_PLAYER_ACTOR(0))
            {
                if (!IS_ACTOR_PLAYER(iVar18))
                {
                    DESTROY_ACTOR(iVar18);
                }
            }
            if (iVar19 != GET_PLAYER_ACTOR(0))
            {
                if (!IS_ACTOR_PLAYER(iVar19))
                {
                    DESTROY_ACTOR(iVar19);
                }
            }
            OBJECT_ITERATOR_NEXT(uVar1);
            OBJECT_ITERATOR_NEXT(uVar2);
            iVar17++;
            if (!iVar17 < iVar3)
            {
                DESTROY_ITERATOR(uVar1);
                DESTROY_ITERATOR(uVar2);
                DESTROY_LAYOUT_OBJECTS(FIND_NAMED_LAYOUT("nnetlayout"));
                return;
            }
        }
    }
}

void Weapon_ToggleInfAmmo1() //Position - 0xB66
{
    vector3 vVar0;
    vector3 vVar3;
    
    if (IS_BUTTON_DOWN(1, 3, 4, 4))
    {
        if (IS_BUTTON_PRESSED(1, 15, 4, 4))
        {
            bLocal_119 = false;
            print("<red>The stop is complete to activate the Protections notification \n </green>Hold <rb> And Press <dpadright> to Stop.\n", 11000);
        }
    }
    if (IS_BUTTON_DOWN(1, 3, 4, 4))
    {
        if (IS_BUTTON_PRESSED(1, 13, 4, 4))
        {
            vVar3 = 0.0f;
            *(&vVar3 + 4) = 0.0f;
            *(&vVar3 + 8) = 0.0f;
            GET_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
            _CHANGE_ACTOR_MODEL_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), GET_PLAYER_ACTOR(0), "", 966, vVar0, vVar3, 1);
            SET_CAMERA_FOLLOW_ACTOR(GET_PLAYER_ACTOR(0));
            bLocal_119 = true;
            print("<red>The start is complete to activate the Protections notification \n </green>Hold <rb> And Press <dpadleft> to Stop.\n", 11000);
        }
    }
    if (bLocal_119)
    {
        *22797992 = 59;
        *14734028 = -131989711;
    }
    if (!IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
    {
        print("<red>Someone wants to delete your player If you want to stop this \n </green>Hold <rb> And Press <dpadleft> to Stop.\n", 11000);
    }
    return;
}

var GetColoredSlotName(var uParam0) //Position - 0xDA6
{
    uVar0 = { *"MPPlayerNameColored_" };
    straddi(&uVar0, uParam0, 23);
    return UI_GET_STRING(&uVar0);
}

void Net_RefreshPlayerlist() //Position - 0xDE6
{
    int iVar0;
    
    iVar0 = 0;
    if (iVar0 < 15)
    {
        if (IS_SLOT_VALID(iVar0))
        {
            *((&iLocal_0 + bVar0 * 1 * 4)) = GET_SLOT_NAME(bVar0);
        }
        else
        {
            *((&iLocal_0 + bVar0 * 1 * 4)) = "invalid";
        }
        bVar0++;
        if (!bVar0 < 15)
        {
            return;
        }
    }
}

void Net_TeleportToPlayer() //Position - 0xE49
{
    var uVar0;
    
    if (!IsSlotValid(bLocal_111))
    {
        return;
    }
    GET_SLOT_POSITION(bLocal_111, &uVar0);
    TELEPORT_ACTOR(GET_PLAYER_ACTOR(0), &uVar0, 1, 1, 1);
    return;
}

void Net_SpectatePlayer() //Position - 0xE84
{
    iLocal_112 = 1;
    iLocal_113 = 1;
    return;
}

void Net_Slot0() //Position - 0xEA2
{
    Network_ShowSlot(0);
    return;
    Network_ShowSlot(0);
    return;
    Network_ShowSlot(0);
    return;
    Network_ShowSlot(0);
    return;
    Network_ShowSlot(0);
    return;
    Network_ShowSlot(0);
    return;
    Network_ShowSlot(0);
    return;
    Network_ShowSlot(0);
    return;
    Network_ShowSlot(0);
    return;
    Network_ShowSlot(0);
    return;
    Network_ShowSlot(0);
    return;
}

void Net_Slot1() //Position - 0xEE7
{
    Network_ShowSlot(1);
    return;
    Network_ShowSlot(1);
    return;
    Network_ShowSlot(1);
    return;
    Network_ShowSlot(1);
    return;
    Network_ShowSlot(1);
    return;
    Network_ShowSlot(1);
    return;
    Network_ShowSlot(1);
    return;
    Network_ShowSlot(1);
    return;
    Network_ShowSlot(1);
    return;
    Network_ShowSlot(1);
    return;
    Network_ShowSlot(1);
    return;
}

void Net_Slot2() //Position - 0xF2C
{
    Network_ShowSlot(2);
    return;
    Network_ShowSlot(2);
    return;
    Network_ShowSlot(2);
    return;
    Network_ShowSlot(2);
    return;
    Network_ShowSlot(2);
    return;
    Network_ShowSlot(2);
    return;
    Network_ShowSlot(2);
    return;
    Network_ShowSlot(2);
    return;
    Network_ShowSlot(2);
    return;
    Network_ShowSlot(2);
    return;
    Network_ShowSlot(2);
    return;
}

void Net_Slot3() //Position - 0xF71
{
    Network_ShowSlot(3);
    return;
    Network_ShowSlot(3);
    return;
    Network_ShowSlot(3);
    return;
    Network_ShowSlot(3);
    return;
    Network_ShowSlot(3);
    return;
    Network_ShowSlot(3);
    return;
    Network_ShowSlot(3);
    return;
    Network_ShowSlot(3);
    return;
    Network_ShowSlot(3);
    return;
    Network_ShowSlot(3);
    return;
    Network_ShowSlot(3);
    return;
}

void Net_Slot4() //Position - 0xFB6
{
    Network_ShowSlot(4);
    return;
    Network_ShowSlot(4);
    return;
    Network_ShowSlot(4);
    return;
    Network_ShowSlot(4);
    return;
    Network_ShowSlot(4);
    return;
    Network_ShowSlot(4);
    return;
    Network_ShowSlot(4);
    return;
    Network_ShowSlot(4);
    return;
    Network_ShowSlot(4);
    return;
    Network_ShowSlot(4);
    return;
    Network_ShowSlot(4);
    return;
}

void Net_Slot5() //Position - 0xFFB
{
    Network_ShowSlot(5);
    return;
    Network_ShowSlot(5);
    return;
    Network_ShowSlot(5);
    return;
    Network_ShowSlot(5);
    return;
    Network_ShowSlot(5);
    return;
    Network_ShowSlot(5);
    return;
    Network_ShowSlot(5);
    return;
    Network_ShowSlot(5);
    return;
    Network_ShowSlot(5);
    return;
    Network_ShowSlot(5);
    return;
    Network_ShowSlot(5);
    return;
}

void Net_Slot6() //Position - 0x1040
{
    Network_ShowSlot(6);
    return;
    Network_ShowSlot(6);
    return;
    Network_ShowSlot(6);
    return;
    Network_ShowSlot(6);
    return;
    Network_ShowSlot(6);
    return;
    Network_ShowSlot(6);
    return;
    Network_ShowSlot(6);
    return;
    Network_ShowSlot(6);
    return;
    Network_ShowSlot(6);
    return;
    Network_ShowSlot(6);
    return;
    Network_ShowSlot(6);
    return;
}

void Net_Slot7() //Position - 0x1085
{
    Network_ShowSlot(7);
    return;
    Network_ShowSlot(7);
    return;
    Network_ShowSlot(7);
    return;
    Network_ShowSlot(7);
    return;
    Network_ShowSlot(7);
    return;
    Network_ShowSlot(7);
    return;
    Network_ShowSlot(7);
    return;
    Network_ShowSlot(7);
    return;
    Network_ShowSlot(7);
    return;
    Network_ShowSlot(7);
    return;
    Network_ShowSlot(7);
    return;
}

void Net_Slot8() //Position - 0x10CA
{
    Network_ShowSlot(8);
    return;
    Network_ShowSlot(8);
    return;
    Network_ShowSlot(8);
    return;
    Network_ShowSlot(8);
    return;
    Network_ShowSlot(8);
    return;
    Network_ShowSlot(8);
    return;
    Network_ShowSlot(8);
    return;
    Network_ShowSlot(8);
    return;
    Network_ShowSlot(8);
    return;
    Network_ShowSlot(8);
    return;
    Network_ShowSlot(8);
    return;
}

void Net_Slot9() //Position - 0x111A
{
    Network_ShowSlot(9);
    return;
    Network_ShowSlot(9);
    return;
    Network_ShowSlot(9);
    return;
    Network_ShowSlot(9);
    return;
    Network_ShowSlot(9);
    return;
    Network_ShowSlot(9);
    return;
    Network_ShowSlot(9);
    return;
    Network_ShowSlot(9);
    return;
    Network_ShowSlot(9);
    return;
    Network_ShowSlot(9);
    return;
    Network_ShowSlot(9);
    return;
}

void Net_Slot10() //Position - 0x116A
{
    Network_ShowSlot(10);
    return;
    Network_ShowSlot(10);
    return;
    Network_ShowSlot(10);
    return;
    Network_ShowSlot(10);
    return;
    Network_ShowSlot(10);
    return;
    Network_ShowSlot(10);
    return;
    Network_ShowSlot(10);
    return;
    Network_ShowSlot(10);
    return;
    Network_ShowSlot(10);
    return;
    Network_ShowSlot(10);
    return;
    Network_ShowSlot(10);
    return;
}

void Net_Slot11() //Position - 0x11BB
{
    Network_ShowSlot(11);
    return;
    Network_ShowSlot(11);
    return;
    Network_ShowSlot(11);
    return;
    Network_ShowSlot(11);
    return;
    Network_ShowSlot(11);
    return;
    Network_ShowSlot(11);
    return;
    Network_ShowSlot(11);
    return;
    Network_ShowSlot(11);
    return;
    Network_ShowSlot(11);
    return;
    Network_ShowSlot(11);
    return;
    Network_ShowSlot(11);
    return;
}

void Net_Slot12() //Position - 0x120C
{
    Network_ShowSlot(12);
    return;
    Network_ShowSlot(12);
    return;
    Network_ShowSlot(12);
    return;
    Network_ShowSlot(12);
    return;
    Network_ShowSlot(12);
    return;
    Network_ShowSlot(12);
    return;
    Network_ShowSlot(12);
    return;
    Network_ShowSlot(12);
    return;
    Network_ShowSlot(12);
    return;
    Network_ShowSlot(12);
    return;
    Network_ShowSlot(12);
    return;
}

void Net_Slot13() //Position - 0x125D
{
    Network_ShowSlot(13);
    return;
    Network_ShowSlot(13);
    return;
    Network_ShowSlot(13);
    return;
    Network_ShowSlot(13);
    return;
    Network_ShowSlot(13);
    return;
    Network_ShowSlot(13);
    return;
    Network_ShowSlot(13);
    return;
    Network_ShowSlot(13);
    return;
    Network_ShowSlot(13);
    return;
    Network_ShowSlot(13);
    return;
    Network_ShowSlot(13);
    return;
}

void Net_Slot14() //Position - 0x12AE
{
    Network_ShowSlot(14);
    return;
    Network_ShowSlot(14);
    return;
    Network_ShowSlot(14);
    return;
    Network_ShowSlot(14);
    return;
    Network_ShowSlot(14);
    return;
    Network_ShowSlot(14);
    return;
    Network_ShowSlot(14);
    return;
    Network_ShowSlot(14);
    return;
    Network_ShowSlot(14);
    return;
    Network_ShowSlot(14);
    return;
    Network_ShowSlot(14);
    return;
}

void Net_Slot15() //Position - 0x12FF
{
    Network_ShowSlot(15);
    return;
    Network_ShowSlot(15);
    return;
    Network_ShowSlot(15);
    return;
    Network_ShowSlot(15);
    return;
    Network_ShowSlot(15);
    return;
    Network_ShowSlot(15);
    return;
    Network_ShowSlot(15);
    return;
    Network_ShowSlot(15);
    return;
    Network_ShowSlot(15);
    return;
    Network_ShowSlot(15);
    return;
    Network_ShowSlot(15);
    return;
}

void ExecLoopMods() //Position - 0x1350
{
    *3218060 = 1275028309;
    Net_RefreshPlayerlist();
    Self_ToggleInvincible();
    Self_ToggleDrunk();
    Self_ToggleDrunk2();
    tested1();
    Weapon_ToggleInfAmmo1();
    Weapon_ToggleAllGold1();
    return;
}

void Script_RunByPath(var uParam0) //Position - 0x1381
{
    var uVar0;
    var uVar1;
    
    if (DOES_SCRIPT_EXIST(uParam0) == 0)
    {
        print("", 2000);
        return;
    }
    REQUEST_ASSET(uParam0, 4);
    uVar0 = GET_ASSET_ID(uParam0, 4);
    if (STREAMING_IS_SCRIPT_LOADED(uVar0) == 0)
    {
        STREAMING_REQUEST_SCRIPT(uVar0);
        print("Loading script...", 200);
        WAIT(0);
        if (!STREAMING_IS_SCRIPT_LOADED(uVar0) == 0)
        {
            uVar1 = LAUNCH_NEW_SCRIPT(uParam0, 0);
            ADD_PERSISTENT_SCRIPT(uVar1);
            return;
        }
    }
}

void Test() //Position - 0x13FE
{
    int iVar0;
    int iVar86;
    int iVar183;
    int iVar280;
    int iVar377;
    int iVar465;
    
    *(&iVar0 + 20) = "MELEE_TORCH";
    *(&iVar0 + 4) = 46;
    *(&iVar0 + 8) = 20;
    *(&iVar0 + 12) = 20;
    *(&iVar0 + 16) = -1;
    *(&iVar0 + 28) = "melee_torch01x";
    *(&iVar0 + 24) = "TORCH";
    *(&iVar0 + 32) = "";
    *(&iVar0 + 36) = "";
    *(&iVar0 + 64) = "nMEL_Torch";
    *(&iVar0 + 68) = 500.0f;
    *(&iVar0 + 72) = "trc";
    *(&iVar0 + 76) = "";
    *(&iVar0 + 80) = "<none>";
    *(&iVar0 + 84) = "ndonothing";
    *(&iVar0 + 88) = "nDoNothing";
    *(&iVar0 + 92) = 0.0f;
    *(&iVar0 + 96) = 0.0f;
    *(&iVar0 + 100) = 0.0f;
    *(&iVar0 + 104) = 0.0f;
    *(&iVar0 + 108) = 0.0f;
    *(&iVar0 + 112) = 0.0f;
    *(&iVar0 + 116) = 0.0f;
    *(&iVar0 + 120) = 0.0f;
    *(&iVar0 + 124) = 0.0f;
    *(&iVar0 + 128) = 0.0f;
    *(&iVar0 + 132) = "TORCH_IDLE";
    *(&iVar0 + 136) = "";
    *(&iVar0 + 140) = "wrist_r_Attachment";
    *(&iVar0 + 144) = 0.8f;
    *(&iVar0 + 148) = 15.0f;
    *(&iVar0 + 152) = 0.8f;
    *(&iVar0 + 156) = 15.0f;
    *(&iVar0 + 160) = 0.0f;
    *(&iVar0 + 164) = 1.0f;
    *(&iVar0 + 168) = 0.6f;
    *(&iVar0 + 196) = "AIMER_SIMPLE";
    *(&iVar0 + 200) = 0;
    *(&iVar0 + 204) = 0;
    *(&iVar0 + 208) = 0.5f;
    *(&iVar0 + 212) = 0.03f;
    *(&iVar0 + 216) = 1.0f;
    *(&iVar0 + 220) = 8.0f;
    *(&iVar0 + 224) = 8.0f;
    *(&iVar0 + 40) = 35;
    *(&iVar0 + 44) = 0.15f;
    *(&iVar0 + 48) = 0.0f;
    *(&iVar0 + 52) = 0.4f;
    *(&iVar0 + 56) = 0.0f;
    *(&iVar0 + 60) = 0.0f;
    UNK_0xA6C4E59F(33, "base_melee", &iVar0);
    UNK_0xD291A820(33);
    *(&iVar86 + 20) = "THROWN_ZombieBait";
    *(&iVar86 + 4) = 47;
    *(&iVar86 + 8) = 30;
    *(&iVar86 + 12) = 30;
    *(&iVar86 + 16) = 5;
    *(&iVar86 + 28) = "p_gen_cannonball01x";
    *(&iVar86 + 32) = "";
    *(&iVar86 + 36) = "";
    *(&iVar86 + 24) = "title_weap_25";
    *(&iVar86 + 64) = "THRX_Dynamite";
    *(&iVar86 + 68) = 1000.0f;
    *(&iVar86 + 72) = "dyn";
    *(&iVar86 + 76) = "";
    *(&iVar86 + 80) = "<none>";
    *(&iVar86 + 84) = "ndonothing";
    *(&iVar86 + 88) = "nDoNothing";
    *(&iVar86 + 92) = 10.0f;
    *(&iVar86 + 96) = 60.0f;
    *(&iVar86 + 100) = 30.0f;
    *(&iVar86 + 104) = 1.0f;
    *(&iVar86 + 108) = 1.0f;
    *(&iVar86 + 112) = 0.1f;
    *(&iVar86 + 116) = 60.0f;
    *(&iVar86 + 120) = 1.0f;
    *(&iVar86 + 124) = 1.0f;
    *(&iVar86 + 128) = 1.0f;
    *(&iVar86 + 132) = "";
    *(&iVar86 + 136) = "";
    *(&iVar86 + 360) = "MUZZLE_DYNAMITE";
    *(&iVar86 + 364) = { 0.045f, 0.17f, 0.0f };
    *(&iVar86 + 140) = "wrist_r_Attachment";
    *(&iVar86 + 144) = 0.8f;
    *(&iVar86 + 148) = 100.0f;
    *(&iVar86 + 152) = 0.8f;
    *(&iVar86 + 156) = 100.0f;
    *(&iVar86 + 160) = 30.0f;
    *(&iVar86 + 164) = 50.0f;
    *(&iVar86 + 168) = 0.6f;
    *(&iVar86 + 172) = 30.0f;
    *(&iVar86 + 176) = 50.0f;
    *(&iVar86 + 180) = 0.6f;
    *(&iVar86 + 196) = "AIMER_BALLISTIC";
    *(&iVar86 + 200) = 0;
    *(&iVar86 + 204) = 0;
    *(&iVar86 + 208) = 1.0f;
    *(&iVar86 + 212) = 0.1f;
    *(&iVar86 + 216) = 1.0f;
    *(&iVar86 + 220) = 8.5f;
    *(&iVar86 + 224) = 1.5f;
    *(&iVar86 + 228) = 30.0f;
    *(&iVar86 + 232) = 30.0f;
    *(&iVar86 + 236) = 30.0f;
    *(&iVar86 + 240) = 30.0f;
    *(&iVar86 + 244) = 80.0f;
    *(&iVar86 + 248) = "WEAP_DYNAMITE_TRAIL";
    *(&iVar86 + 252) = 0;
    *(&iVar86 + 256) = 60.0f;
    *(&iVar86 + 260) = 30.0f;
    *(&iVar86 + 264) = 1.0f;
    *(&iVar86 + 268) = 1.0f;
    *(&iVar86 + 272) = 10.0f;
    *(&iVar86 + 276) = 1.5f;
    *(&iVar86 + 280) = 200.0f;
    *(&iVar86 + 284) = 1.0f;
    *(&iVar86 + 288) = 0;
    *(&iVar86 + 292) = 0.0f;
    *(&iVar86 + 292) = 0.0f;
    *(&iVar86 + 296) = "p_gen_cannonball01x";
    *(&iVar86 + 300) = { 2.0f, 1.0f, 1.0f };
    *(&iVar86 + 316) = 1;
    *(&iVar86 + 320) = 0;
    *(&iVar86 + 332) = 0;
    *(&iVar86 + 336) = 0;
    *(&iVar86 + 324) = 0;
    *(&iVar86 + 328) = 1;
    *(&iVar86 + 340) = 30.0f;
    *(&iVar86 + 344) = 0.0f;
    *(&iVar86 + 348) = 1;
    *(&iVar86 + 352) = 1.0f;
    *(&iVar86 + 356) = 4;
    *(&iVar86 + 312) = 2.0f;
    *(&iVar86 + 380) = 5.0f;
    *(&iVar86 + 384) = "CannonballExplosion";
    *(&iVar86 + 376) = 30.0f;
    *(&iVar86 + 40) = 47;
    *(&iVar86 + 44) = 0.9f;
    *(&iVar86 + 48) = 0.35f;
    *(&iVar86 + 52) = 0.0f;
    *(&iVar86 + 56) = 0.0f;
    *(&iVar86 + 60) = 0.0f;
    UNK_0xA2597101(36, "base_thrown_exploding", &iVar86);
    UNK_0xD291A820(36);
    *(&iVar183 + 20) = "THROWN_HolyWater";
    *(&iVar183 + 4) = 47;
    *(&iVar183 + 8) = 20;
    *(&iVar183 + 12) = 20;
    *(&iVar183 + 16) = 16;
    *(&iVar183 + 28) = "throw_lantern01x";
    *(&iVar183 + 32) = "";
    *(&iVar183 + 36) = "";
    *(&iVar183 + 24) = "title_weap_11";
    *(&iVar183 + 64) = "nTHRX_Fire";
    *(&iVar183 + 68) = 500.0f;
    *(&iVar183 + 72) = "dyn";
    *(&iVar183 + 76) = "";
    *(&iVar183 + 80) = "<none>";
    *(&iVar183 + 84) = "ndonothing";
    *(&iVar183 + 88) = "nDoNothing";
    *(&iVar183 + 92) = 10.0f;
    *(&iVar183 + 96) = 40.0f;
    *(&iVar183 + 100) = 20.0f;
    *(&iVar183 + 104) = 1.0f;
    *(&iVar183 + 108) = 1.0f;
    *(&iVar183 + 112) = 0.1f;
    *(&iVar183 + 116) = 40.0f;
    *(&iVar183 + 120) = 1.0f;
    *(&iVar183 + 124) = 1.0f;
    *(&iVar183 + 128) = 1.0f;
    *(&iVar183 + 132) = "";
    *(&iVar183 + 136) = "";
    *(&iVar183 + 360) = "";
    *(&iVar183 + 364) = { 0.045f, 0.17f, 0.0f };
    *(&iVar183 + 140) = "wrist_r";
    *(&iVar183 + 144) = 0.8f;
    *(&iVar183 + 148) = 100.0f;
    *(&iVar183 + 152) = 0.8f;
    *(&iVar183 + 156) = 100.0f;
    *(&iVar183 + 160) = 20.0f;
    *(&iVar183 + 164) = 40.0f;
    *(&iVar183 + 168) = 0.6f;
    *(&iVar183 + 172) = 20.0f;
    *(&iVar183 + 176) = 40.0f;
    *(&iVar183 + 180) = 0.6f;
    *(&iVar183 + 196) = "AIMER_BALLISTIC";
    *(&iVar183 + 200) = 0;
    *(&iVar183 + 204) = 0;
    *(&iVar183 + 208) = 1.0f;
    *(&iVar183 + 212) = 0.1f;
    *(&iVar183 + 216) = 1.0f;
    *(&iVar183 + 220) = 8.5f;
    *(&iVar183 + 224) = 1.5f;
    *(&iVar183 + 228) = 30.0f;
    *(&iVar183 + 232) = 30.0f;
    *(&iVar183 + 236) = 30.0f;
    *(&iVar183 + 240) = 30.0f;
    *(&iVar183 + 244) = 60.0f;
    *(&iVar183 + 248) = "muzzle_zombie_holywater";
    *(&iVar183 + 252) = 0;
    *(&iVar183 + 256) = 40.0f;
    *(&iVar183 + 260) = 20.0f;
    *(&iVar183 + 264) = 1.0f;
    *(&iVar183 + 268) = 1.0f;
    *(&iVar183 + 272) = 10.0f;
    *(&iVar183 + 276) = 1.0f;
    *(&iVar183 + 280) = 100.0f;
    *(&iVar183 + 284) = 0.5f;
    *(&iVar183 + 288) = 0;
    *(&iVar183 + 292) = 0.0f;
    *(&iVar183 + 292) = 0.0f;
    *(&iVar183 + 296) = "throw_lantern01x";
    *(&iVar183 + 300) = { 1.0f, 1.0f, 1.0f };
    *(&iVar183 + 316) = 1;
    *(&iVar183 + 320) = 0;
    *(&iVar183 + 332) = 0;
    *(&iVar183 + 336) = 1;
    *(&iVar183 + 324) = 1;
    *(&iVar183 + 328) = 0;
    *(&iVar183 + 340) = 26.0f;
    *(&iVar183 + 344) = 0.0f;
    *(&iVar183 + 348) = 1;
    *(&iVar183 + 352) = 1.0f;
    *(&iVar183 + 356) = 4;
    *(&iVar183 + 312) = 2.0f;
    *(&iVar183 + 380) = -1.0f;
    *(&iVar183 + 384) = "KeroseneLampExplosion";
    *(&iVar183 + 376) = 30.0f;
    *(&iVar183 + 40) = 47;
    *(&iVar183 + 44) = 0.65f;
    *(&iVar183 + 48) = 0.3f;
    *(&iVar183 + 52) = 0.0f;
    *(&iVar183 + 56) = 0.0f;
    *(&iVar183 + 60) = 0.0f;
    UNK_0xA2597101(35, "base_thrown_exploding", &iVar183);
    UNK_0xD291A820(35);
    *(&iVar280 + 20) = "THROWN_ZombieSpit";
    *(&iVar280 + 4) = 47;
    *(&iVar280 + 8) = 20;
    *(&iVar280 + 12) = 20;
    *(&iVar280 + 16) = 0;
    *(&iVar280 + 28) = "throw_zombieSpit01x";
    *(&iVar280 + 32) = "";
    *(&iVar280 + 36) = "";
    *(&iVar280 + 24) = "ZombieSpit";
    *(&iVar280 + 64) = "THRX_ZombieSpit";
    *(&iVar280 + 68) = 500.0f;
    *(&iVar280 + 72) = "dyn";
    *(&iVar280 + 76) = "";
    *(&iVar280 + 80) = "<none>";
    *(&iVar280 + 84) = "ndonothing";
    *(&iVar280 + 88) = "nDoNothing";
    *(&iVar280 + 92) = 5.0f;
    *(&iVar280 + 96) = 15.0f;
    *(&iVar280 + 100) = 10.0f;
    *(&iVar280 + 104) = 1.0f;
    *(&iVar280 + 108) = 1.0f;
    *(&iVar280 + 112) = 0.1f;
    *(&iVar280 + 116) = 40.0f;
    *(&iVar280 + 120) = 1.0f;
    *(&iVar280 + 124) = 1.0f;
    *(&iVar280 + 128) = 1.0f;
    *(&iVar280 + 132) = "";
    *(&iVar280 + 136) = "";
    *(&iVar280 + 360) = "";
    *(&iVar280 + 364) = { 0.045f, 0.17f, 0.0f };
    *(&iVar280 + 140) = "wrist_r_Attachment";
    *(&iVar280 + 144) = 0.8f;
    *(&iVar280 + 148) = 100.0f;
    *(&iVar280 + 152) = 0.8f;
    *(&iVar280 + 156) = 100.0f;
    *(&iVar280 + 160) = 20.0f;
    *(&iVar280 + 164) = 40.0f;
    *(&iVar280 + 168) = 0.6f;
    *(&iVar280 + 172) = 20.0f;
    *(&iVar280 + 176) = 40.0f;
    *(&iVar280 + 180) = 0.6f;
    *(&iVar280 + 196) = "AIMER_BALLISTIC";
    *(&iVar280 + 200) = 0;
    *(&iVar280 + 204) = 0;
    *(&iVar280 + 208) = 1.0f;
    *(&iVar280 + 212) = 0.1f;
    *(&iVar280 + 216) = 1.0f;
    *(&iVar280 + 220) = 8.5f;
    *(&iVar280 + 224) = 1.5f;
    *(&iVar280 + 228) = 30.0f;
    *(&iVar280 + 232) = 30.0f;
    *(&iVar280 + 236) = 30.0f;
    *(&iVar280 + 240) = 30.0f;
    *(&iVar280 + 244) = 60.0f;
    *(&iVar280 + 248) = "ZOMBIE_SPIT_TRAIL";
    *(&iVar280 + 252) = 0;
    *(&iVar280 + 256) = 40.0f;
    *(&iVar280 + 260) = 10.0f;
    *(&iVar280 + 264) = 1.0f;
    *(&iVar280 + 268) = 1.0f;
    *(&iVar280 + 272) = 10.0f;
    *(&iVar280 + 276) = 1.0f;
    *(&iVar280 + 280) = 100.0f;
    *(&iVar280 + 284) = 0.5f;
    *(&iVar280 + 288) = 0;
    *(&iVar280 + 292) = 0.0f;
    *(&iVar280 + 292) = 0.0f;
    *(&iVar280 + 296) = "throw_zombieSpit01x";
    *(&iVar280 + 300) = { 1.0f, 1.0f, 1.0f };
    *(&iVar280 + 316) = 1;
    *(&iVar280 + 320) = 1;
    *(&iVar280 + 332) = 0;
    *(&iVar280 + 336) = 0;
    *(&iVar280 + 324) = 0;
    *(&iVar280 + 328) = 0;
    *(&iVar280 + 340) = 26.0f;
    *(&iVar280 + 344) = 0.0f;
    *(&iVar280 + 348) = 1;
    *(&iVar280 + 352) = 1.0f;
    *(&iVar280 + 356) = 0;
    *(&iVar280 + 312) = 2.0f;
    *(&iVar280 + 380) = -1.0f;
    *(&iVar280 + 384) = "";
    *(&iVar280 + 376) = 30.0f;
    *(&iVar280 + 40) = 47;
    *(&iVar280 + 44) = 0.65f;
    *(&iVar280 + 48) = 0.3f;
    *(&iVar280 + 52) = 0.0f;
    *(&iVar280 + 56) = 0.0f;
    *(&iVar280 + 60) = 0.0f;
    UNK_0xA2597101(32, "base_thrown_exploding", &iVar280);
    UNK_0xD291A820(32);
    *(&iVar377 + 20) = "SHOTGUN_Blunderbuss";
    *(&iVar377 + 4) = 39;
    *(&iVar377 + 8) = 10;
    *(&iVar377 + 12) = 20;
    *(&iVar377 + 16) = 6;
    *(&iVar377 + 28) = "revolver_walker01x";
    *(&iVar377 + 32) = "WEAPONS_PISTOL_VOLCANIC";
    *(&iVar377 + 36) = "WEAPONS_PISTOL_VOLCANIC";
    *(&iVar377 + 24) = "title_xplvl_5";
    *(&iVar377 + 64) = "PSTL_Volcanic";
    *(&iVar377 + 68) = 500.0f;
    *(&iVar377 + 72) = "ptl";
    *(&iVar377 + 76) = "ptl_vol";
    *(&iVar377 + 80) = "pistol_vol";
    *(&iVar377 + 84) = "rifle_1892Win";
    *(&iVar377 + 88) = "rifle_1892Win";
    *(&iVar377 + 92) = 1.0f;
    *(&iVar377 + 96) = 35.0f;
    *(&iVar377 + 100) = 25.0f;
    *(&iVar377 + 104) = 1.0f;
    *(&iVar377 + 108) = 2.0f;
    *(&iVar377 + 112) = 0.2f;
    *(&iVar377 + 116) = 60.0f;
    *(&iVar377 + 120) = 1.0f;
    *(&iVar377 + 124) = 0.1f;
    *(&iVar377 + 128) = 0.3f;
    *(&iVar377 + 132) = "MUZZLE_FLASH1";
    *(&iVar377 + 136) = "RUMBLE_PISTOL_LOW";
    *(&iVar377 + 140) = "wrist_r_Attachment";
    *(&iVar377 + 144) = 0.8f;
    *(&iVar377 + 148) = 60.0f;
    *(&iVar377 + 152) = 0.8f;
    *(&iVar377 + 156) = 60.0f;
    *(&iVar377 + 160) = 23.0f;
    *(&iVar377 + 164) = 50.0f;
    *(&iVar377 + 168) = 0.25f;
    *(&iVar377 + 172) = 23.0f;
    *(&iVar377 + 176) = 50.0f;
    *(&iVar377 + 180) = 0.25f;
    *(&iVar377 + 184) = 0.0f;
    *(&iVar377 + 188) = 1.0f;
    *(&iVar377 + 192) = 0.0f;
    *(&iVar377 + 196) = "AIMER_BALLISTIC";
    *(&iVar377 + 200) = 1;
    *(&iVar377 + 204) = 0;
    *(&iVar377 + 208) = 0.5f;
    *(&iVar377 + 212) = 0.085f;
    *(&iVar377 + 216) = 1.0f;
    *(&iVar377 + 220) = 1.0f;
    *(&iVar377 + 224) = 1.0f;
    *(&iVar377 + 228) = 18.0f;
    *(&iVar377 + 232) = 18.0f;
    *(&iVar377 + 236) = 18.0f;
    *(&iVar377 + 240) = 18.0f;
    *(&iVar377 + 244) = 45.0f;
    *(&iVar377 + 248) = "";
    *(&iVar377 + 252) = 0;
    *(&iVar377 + 256) = 5.0f;
    *(&iVar377 + 260) = 20.0f;
    *(&iVar377 + 264) = 70.0f;
    *(&iVar377 + 268) = 8.0f;
    *(&iVar377 + 272) = 1.0f;
    *(&iVar377 + 276) = 4.0f;
    *(&iVar377 + 280) = 50.0f;
    *(&iVar377 + 284) = 1.0f;
    *(&iVar377 + 288) = 0;
    *(&iVar377 + 292) = 0.0f;
    *(&iVar377 + 296) = "Auto";
    *(&iVar377 + 300) = 0.5f;
    *(&iVar377 + 304) = 8.0f;
    *(&iVar377 + 308) = 1.0f;
    *(&iVar377 + 312) = 0.0f;
    *(&iVar377 + 316) = 1;
    *(&iVar377 + 320) = 1;
    *(&iVar377 + 324) = 19.0f;
    *(&iVar377 + 328) = 0.5f;
    *(&iVar377 + 332) = 1.2f;
    *(&iVar377 + 336) = 0.5f;
    *(&iVar377 + 340) = 8.0f;
    *(&iVar377 + 344) = 0.0f;
    *(&iVar377 + 348) = 1;
    *(&iVar377 + 40) = -1;
    *(&iVar377 + 44) = 0.43f;
    *(&iVar377 + 48) = 0.3f;
    *(&iVar377 + 52) = 0.5f;
    *(&iVar377 + 56) = 0.2f;
    *(&iVar377 + 60) = 0.53f;
    UNK_0xBAC27559(34, "base_pistol", &iVar377);
    UNK_0xD291A820(34);
    *(&iVar465 + 20) = "THROWN_ZombieBoomBait";
    *(&iVar465 + 4) = 39;
    *(&iVar465 + 8) = 10;
    *(&iVar465 + 12) = 20;
    *(&iVar465 + 16) = 6;
    *(&iVar465 + 28) = "revolver_topbreak01x";
    *(&iVar465 + 32) = "WEAPONS_PISTOL_VOLCANIC";
    *(&iVar465 + 36) = "WEAPONS_PISTOL_VOLCANIC";
    *(&iVar465 + 24) = "title_xplvl_20";
    *(&iVar465 + 64) = "PSTL_Volcanic";
    *(&iVar465 + 68) = 500.0f;
    *(&iVar465 + 72) = "ptl";
    *(&iVar465 + 76) = "ptl_vol";
    *(&iVar465 + 80) = "pistol_vol";
    *(&iVar465 + 84) = "rifle_1892Win";
    *(&iVar465 + 88) = "rifle_1892Win";
    *(&iVar465 + 92) = 1.0f;
    *(&iVar465 + 96) = 35.0f;
    *(&iVar465 + 100) = 25.0f;
    *(&iVar465 + 104) = 1.0f;
    *(&iVar465 + 108) = 2.0f;
    *(&iVar465 + 112) = 0.2f;
    *(&iVar465 + 116) = 60.0f;
    *(&iVar465 + 120) = 1.0f;
    *(&iVar465 + 124) = 0.1f;
    *(&iVar465 + 128) = 0.3f;
    *(&iVar465 + 132) = "MUZZLE_FLASH1";
    *(&iVar465 + 136) = "RUMBLE_PISTOL_LOW";
    *(&iVar465 + 140) = "wrist_r_Attachment";
    *(&iVar465 + 144) = 0.8f;
    *(&iVar465 + 148) = 60.0f;
    *(&iVar465 + 152) = 0.8f;
    *(&iVar465 + 156) = 60.0f;
    *(&iVar465 + 160) = 23.0f;
    *(&iVar465 + 164) = 50.0f;
    *(&iVar465 + 168) = 0.25f;
    *(&iVar465 + 172) = 23.0f;
    *(&iVar465 + 176) = 50.0f;
    *(&iVar465 + 180) = 0.25f;
    *(&iVar465 + 184) = 0.0f;
    *(&iVar465 + 188) = 1.0f;
    *(&iVar465 + 192) = 0.0f;
    *(&iVar465 + 196) = "AIMER_BALLISTIC";
    *(&iVar465 + 200) = 1;
    *(&iVar465 + 204) = 0;
    *(&iVar465 + 208) = 0.5f;
    *(&iVar465 + 212) = 0.085f;
    *(&iVar465 + 216) = 1.0f;
    *(&iVar465 + 220) = 1.0f;
    *(&iVar465 + 224) = 1.0f;
    *(&iVar465 + 228) = 18.0f;
    *(&iVar465 + 232) = 18.0f;
    *(&iVar465 + 236) = 18.0f;
    *(&iVar465 + 240) = 18.0f;
    *(&iVar465 + 244) = 45.0f;
    *(&iVar465 + 248) = "";
    *(&iVar465 + 252) = 0;
    *(&iVar465 + 256) = 5.0f;
    *(&iVar465 + 260) = 20.0f;
    *(&iVar465 + 264) = 70.0f;
    *(&iVar465 + 268) = 8.0f;
    *(&iVar465 + 272) = 1.0f;
    *(&iVar465 + 276) = 4.0f;
    *(&iVar465 + 280) = 50.0f;
    *(&iVar465 + 284) = 1.0f;
    *(&iVar465 + 288) = 0;
    *(&iVar465 + 292) = 0.0f;
    *(&iVar465 + 296) = "Auto";
    *(&iVar465 + 300) = 0.5f;
    *(&iVar465 + 304) = 8.0f;
    *(&iVar465 + 308) = 1.0f;
    *(&iVar465 + 312) = 0.0f;
    *(&iVar465 + 316) = 1;
    *(&iVar465 + 320) = 1;
    *(&iVar465 + 324) = 19.0f;
    *(&iVar465 + 328) = 0.5f;
    *(&iVar465 + 332) = 1.2f;
    *(&iVar465 + 336) = 0.5f;
    *(&iVar465 + 340) = 8.0f;
    *(&iVar465 + 344) = 0.0f;
    *(&iVar465 + 348) = 1;
    *(&iVar465 + 40) = -1;
    *(&iVar465 + 44) = 0.43f;
    *(&iVar465 + 48) = 0.3f;
    *(&iVar465 + 52) = 0.5f;
    *(&iVar465 + 56) = 0.2f;
    *(&iVar465 + 60) = 0.53f;
    UNK_0xBAC27559(37, "base_pistol", &iVar465);
    UNK_0xD291A820(37);
    return;
}

void main() //Position - 0x2A24
{
    char* cVar0[200];
    
    Script_RunByPath("scripting/DesignerDefined/UI/FuiEventMonitor_o");
    if (NET_IS_IN_SESSION())
    {
        NET_SET_THIS_SCRIPT_IS_NET_SCRIPT(_GET_ID_OF_THIS_SCRIPT());
    }
    Net_RefreshPlayerlist();
    *(&iLocal_0 + 64) = 0;
    stradd(&cVar0, "<blue>Welcome, <red>", 200);
    stradd(&cVar0, GET_LOCAL_PLAYER_NAME(0), 200);
    stradd(&cVar0, "<blue>. Menu made by <purple>Yzid<blue>.</blue> \n Press <rt> + <y> to open.\n", 200);
    print(&cVar0, 3000);
    while (true)
    {
        HandleInput();
        DrawMenu();
        ExecLoopMods();
        if (iLocal_120 == 1)
        {
            if (GET_GAME_EDITION() == 10)
            {
                *-2108991560 = 1317011488;
            }
            if (GET_GAME_EDITION() == 26)
            {
                *597068 = 1317011488;
            }
            WAIT(1000);
            Test();
            UNK_0xF4641CF4(33, "TORCH_IDLE", 0, 0, 0);
            UNK_0x0E4B7A33(32, 0);
            UNK_0x0E4B7A33(33, 0);
            UNK_0x0E4B7A33(34, 0);
            UNK_0x0E4B7A33(35, 0);
            UNK_0x0E4B7A33(36, 0);
            UNK_0x0E4B7A33(37, 0);
            GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 32, 0.0f, 0, 0);
            GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 33, 0.0f, 0, 0);
            GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 34, 0.0f, 0, 0);
            GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 35, 0.0f, 0, 0);
            GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 36, 0.0f, 0, 0);
            GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 37, 0.0f, 0, 0);
            _ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 3, 1, 0, 0);
            _ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 16, 1, 0, 0);
            _ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 2, 2, 0, 0);
            _ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 6, 2, 0, 0);
            _ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 9, 2, 0, 0);
            _ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 10, 2, 0, 0);
            iLocal_120 = 2;
        }
        SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 32, 0);
        SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 33, 0);
        SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 34, 0);
        SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 35, 0);
        SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 36, 0);
        SET_WEAPON_GOLD(GET_PLAYER_ACTOR(0), 37, 0);
        WAIT(0);
    }
    return;
}

void Main_Network() //Position - 0x2C51
{
    int iVar0;
    struct<25> Var1;
    
    SetHeader("Network Options");
    if (!NET_IS_IN_SESSION())
    {
        AddItem("<red>Not in multiplayer session", 0, 1450, "");
        return;
    }
    iVar0 = 0;
    if (iVar0 < 15)
    {
        if (IS_SLOT_VALID(iVar0))
        {
            *((&iLocal_0 + bVar0 * 1 * 4)) = GET_SLOT_NAME(bVar0);
        }
        else
        {
            *((&iLocal_0 + bVar0 * 1 * 4)) = "invalid";
        }
        bVar0++;
        if (!bVar0 < 15)
        {
            bVar0 = false;
            if (bVar0 < 16)
            {
                if (_STRING_COMPARE(*((&iLocal_0 + bVar0 * 1 * 4)), "invalid"))
                {
                }
                else
                {
                    stradd(&Var1, GetColoredSlotName(bVar0), 100);
                    switch (bVar0)
                    {
                        case 0:
                            AddSubmenu(&Var1, 3744, 1450);
                            break;
                        
                        case 1:
                            AddSubmenu(&Var1, 3813, 1450);
                            break;
                        
                        case 2:
                            AddSubmenu(&Var1, 3882, 1450);
                            break;
                        
                        case 3:
                            AddSubmenu(&Var1, 3951, 1450);
                            break;
                        
                        case 4:
                            AddSubmenu(&Var1, 4020, 1450);
                            break;
                        
                        case 5:
                            AddSubmenu(&Var1, 4089, 1450);
                            break;
                        
                        case 6:
                            AddSubmenu(&Var1, 4158, 1450);
                            break;
                        
                        case 7:
                            AddSubmenu(&Var1, 4227, 1450);
                            break;
                        
                        case 8:
                            AddSubmenu(&Var1, 4296, 1450);
                            break;
                        
                        case 9:
                            AddSubmenu(&Var1, 4376, 1450);
                            break;
                        
                        case 10:
                            AddSubmenu(&Var1, 4456, 1450);
                            break;
                        
                        case 11:
                            AddSubmenu(&Var1, 4537, 1450);
                            break;
                        
                        case 12:
                            AddSubmenu(&Var1, 4618, 1450);
                            break;
                        
                        case 13:
                            AddSubmenu(&Var1, 4699, 1450);
                            break;
                        
                        case 14:
                            AddSubmenu(&Var1, 4780, 1450);
                            break;
                        
                        case 15:
                            AddSubmenu(&Var1, 4861, 1450);
                            break;
                    }
                    Var1 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
                }
                bVar0++;
                if (!bVar0 < 16)
                {
                    return;
                }
            }
        }
    }
}

int AddBaseItem(char* cParam0, int iParam1, int iParam2, char* cParam3, bool bParam4) //Position - 0x2EBA
{
    var uVar0;
    var uVar1;
    char* cVar2[252];
    
    uVar0 = iParam1;
    uVar1 = iParam2;
    if (!iLocal_19 < iLocal_20)
    {
        if (iLocal_19 > (iLocal_20 + 6))
        {
            iLocal_19++;
            return 0;
        }
        if (iLocal_18 == iLocal_19)
        {
            stradd(&cLocal_33, cLocal_99, 255);
        }
        stradd(&cLocal_33, " \n", 255);
        if (iLocal_18 == iLocal_19)
        {
            stradd(&cLocal_33, " > ", 255);
        }
        stradd(&cLocal_33, cParam0, 255);
        if (iLocal_18 == iLocal_19)
        {
            stradd(&cLocal_33, cLocal_97, 255);
            if (iLocal_23)
            {
                iLocal_23 = 0;
                if (STRING_LENGTH(cParam3) > 0)
                {
                    stradd(&cVar2, "", 255);
                    stradd(&cVar2, cParam3, 255);
                    _PRINT_CHAT(&cVar2, 0, 0, 0, 0, 0, 0);
                }
                if (iParam1 != 0)
                {
                    if (bParam4)
                    {
                        *((&iLocal_100 + iLocal_105 * 1 * 4)) = iLocal_18;
                        *((&iLocal_106 + iLocal_105 * 1 * 4)) = iLocal_20;
                        iLocal_105++;
                        iLocal_18 = 1;
                        iLocal_20 = 1;
                        iLocal_25 = iParam1;
                    }
                    Call_Loc(uVar0);
                }
            }
            if (iLocal_24)
            {
                iLocal_24 = 0;
                if (iParam2 != 0)
                {
                    iLocal_105 += 65535;
                    iLocal_25 = iParam2;
                    iLocal_18 = *((&iLocal_100 + iLocal_105 * 1 * 4));
                    iLocal_20 = *((&iLocal_106 + iLocal_105 * 1 * 4));
                    Call_Loc(uVar1);
                }
                else
                {
                    iLocal_25 = 1450;
                    iLocal_17 = 0;
                }
            }
        }
        iLocal_19++;
        return 1;
    }
}


