#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_BookScript2512012670.h"
#include "AssemblyU2DCSharp_BossController2748107211.h"
#include "AssemblyU2DCSharp_BossHealthBar897985056.h"
#include "AssemblyU2DCSharp_BossQuestions4231512970.h"
#include "AssemblyU2DCSharp_ButtonPushed1344210563.h"
#include "AssemblyU2DCSharp_CameraController3555666667.h"
#include "AssemblyU2DCSharp_Checkpoint1235175266.h"
#include "AssemblyU2DCSharp_Collect626302910.h"
#include "AssemblyU2DCSharp_EnterNameScript1431468338.h"
#include "AssemblyU2DCSharp_GameButtons3753496245.h"
#include "AssemblyU2DCSharp_HealthBar1323021899.h"
#include "AssemblyU2DCSharp_HurtPlayer2838002628.h"
#include "AssemblyU2DCSharp_JITScript4133567744.h"
#include "AssemblyU2DCSharp_MenuButtons1515503032.h"
#include "AssemblyU2DCSharp_MessagePanel1958872291.h"
#include "AssemblyU2DCSharp_MovingObject4252805171.h"
#include "AssemblyU2DCSharp_PersistenceManager3756203822.h"
#include "AssemblyU2DCSharp_PersistenceSceneController1994663951.h"
#include "AssemblyU2DCSharp_PlayerController4148409433.h"
#include "AssemblyU2DCSharp_PlayerPersistantData3855664020.h"
#include "AssemblyU2DCSharp_QuestionCanvas2285535216.h"
#include "AssemblyU2DCSharp_QuestionPanel1993000386.h"
#include "AssemblyU2DCSharp_ReviewScript922975391.h"
#include "AssemblyU2DCSharp_SettingsScript2637859674.h"
#include "AssemblyU2DCSharp_SlimeController906310484.h"
#include "AssemblyU2DCSharp_StompEnemy2282645357.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (U3CModuleU3E_t3783534221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (BookScript_t2512012670), -1, sizeof(BookScript_t2512012670_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1701[9] = 
{
	0,
	BookScript_t2512012670_StaticFields::get_offset_of_bookControl_3(),
	BookScript_t2512012670_StaticFields::get_offset_of_levelCount_4(),
	BookScript_t2512012670::get_offset_of_words_5(),
	BookScript_t2512012670::get_offset_of_reviewWords_6(),
	BookScript_t2512012670::get_offset_of_reviewIndices_7(),
	BookScript_t2512012670::get_offset_of_numBooks_8(),
	BookScript_t2512012670::get_offset_of_maxBooks_9(),
	BookScript_t2512012670::get_offset_of_numBooksCollected_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (BossController_t2748107211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[5] = 
{
	BossController_t2748107211::get_offset_of_target_2(),
	BossController_t2748107211::get_offset_of_speed_3(),
	BossController_t2748107211::get_offset_of_minDistance_4(),
	BossController_t2748107211::get_offset_of_range_5(),
	BossController_t2748107211::get_offset_of_canMove_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (BossHealthBar_t897985056), -1, sizeof(BossHealthBar_t897985056_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1703[3] = 
{
	BossHealthBar_t897985056::get_offset_of_fillAmount_2(),
	BossHealthBar_t897985056::get_offset_of_content_3(),
	BossHealthBar_t897985056_StaticFields::get_offset_of_current_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (BossQuestions_t4231512970), -1, sizeof(BossQuestions_t4231512970_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1704[19] = 
{
	0,
	0,
	BossQuestions_t4231512970::get_offset_of_Question_4(),
	BossQuestions_t4231512970::get_offset_of_Ans1_5(),
	BossQuestions_t4231512970::get_offset_of_Ans2_6(),
	BossQuestions_t4231512970::get_offset_of_Ans3_7(),
	BossQuestions_t4231512970::get_offset_of_numWords_8(),
	BossQuestions_t4231512970::get_offset_of_delim_9(),
	BossQuestions_t4231512970::get_offset_of_delim2_10(),
	BossQuestions_t4231512970::get_offset_of_wrdTmp_11(),
	BossQuestions_t4231512970::get_offset_of_defTmp_12(),
	BossQuestions_t4231512970::get_offset_of_currQuestion_13(),
	BossQuestions_t4231512970_StaticFields::get_offset_of_questionsAnswers_14(),
	BossQuestions_t4231512970::get_offset_of_answerOptions_15(),
	BossQuestions_t4231512970::get_offset_of_keyList_16(),
	BossQuestions_t4231512970_StaticFields::get_offset_of_currAnswers_17(),
	BossQuestions_t4231512970::get_offset_of_multiple_choice_18(),
	BossQuestions_t4231512970_StaticFields::get_offset_of_correct_index_19(),
	BossQuestions_t4231512970_StaticFields::get_offset_of_questionsUsed_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { sizeof (ButtonPushed_t1344210563), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1705[7] = 
{
	ButtonPushed_t1344210563::get_offset_of_Name_2(),
	ButtonPushed_t1344210563::get_offset_of_chosen_3(),
	ButtonPushed_t1344210563::get_offset_of_correct_answer_4(),
	ButtonPushed_t1344210563::get_offset_of_Health_5(),
	ButtonPushed_t1344210563::get_offset_of_bossHealth_6(),
	ButtonPushed_t1344210563::get_offset_of_player_7(),
	ButtonPushed_t1344210563::get_offset_of_clear_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (CameraController_t3555666667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1706[4] = 
{
	CameraController_t3555666667::get_offset_of_target_2(),
	CameraController_t3555666667::get_offset_of_followAhead_3(),
	CameraController_t3555666667::get_offset_of_targetPosition_4(),
	CameraController_t3555666667::get_offset_of_smoothing_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (Checkpoint_t1235175266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1707[1] = 
{
	Checkpoint_t1235175266::get_offset_of_checkpointActive_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (Collect_t626302910), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1708[1] = 
{
	Collect_t626302910::get_offset_of_audioS_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (EnterNameScript_t1431468338), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1709[2] = 
{
	EnterNameScript_t1431468338::get_offset_of_NameInputFieldText_2(),
	EnterNameScript_t1431468338::get_offset_of_RequiredText_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (GameButtons_t3753496245), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1710[4] = 
{
	GameButtons_t3753496245::get_offset_of_showIfPaused_2(),
	GameButtons_t3753496245::get_offset_of_showIfResumed_3(),
	GameButtons_t3753496245::get_offset_of_panel_4(),
	GameButtons_t3753496245::get_offset_of_qCanvas_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (HealthBar_t1323021899), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1711[4] = 
{
	HealthBar_t1323021899::get_offset_of_fillAmount_2(),
	HealthBar_t1323021899::get_offset_of_content_3(),
	HealthBar_t1323021899::get_offset_of_NameText_4(),
	HealthBar_t1323021899::get_offset_of_current_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (HurtPlayer_t2838002628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1712[2] = 
{
	HurtPlayer_t2838002628::get_offset_of_Health_2(),
	HurtPlayer_t2838002628::get_offset_of_Player_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (JITScript_t4133567744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1714[1] = 
{
	JITScript_t4133567744::get_offset_of_wordDisplay_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (MenuButtons_t1515503032), -1, sizeof(MenuButtons_t1515503032_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1715[1] = 
{
	MenuButtons_t1515503032_StaticFields::get_offset_of_currLevel_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1716 = { sizeof (MessagePanel_t1958872291), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1716[2] = 
{
	MessagePanel_t1958872291::get_offset_of_WordDisplay_2(),
	MessagePanel_t1958872291::get_offset_of_button_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1717 = { sizeof (MovingObject_t4252805171), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1717[5] = 
{
	MovingObject_t4252805171::get_offset_of_objectToMove_2(),
	MovingObject_t4252805171::get_offset_of_startPoint_3(),
	MovingObject_t4252805171::get_offset_of_endPoint_4(),
	MovingObject_t4252805171::get_offset_of_moveSpeed_5(),
	MovingObject_t4252805171::get_offset_of_currentTarget_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1718 = { sizeof (PersistenceManager_t3756203822), -1, sizeof(PersistenceManager_t3756203822_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1718[1] = 
{
	PersistenceManager_t3756203822_StaticFields::get_offset_of_Instance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1719 = { sizeof (PersistenceSceneController_t1994663951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1719[2] = 
{
	PersistenceSceneController_t1994663951::get_offset_of_Player_2(),
	PersistenceSceneController_t1994663951::get_offset_of_HealthBar_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1720 = { sizeof (PlayerController_t4148409433), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1720[23] = 
{
	PlayerController_t4148409433::get_offset_of_gameButton_2(),
	PlayerController_t4148409433::get_offset_of_moveSpeed_3(),
	PlayerController_t4148409433::get_offset_of_jumpSpeed_4(),
	PlayerController_t4148409433::get_offset_of_numBooks_5(),
	PlayerController_t4148409433::get_offset_of_maxBooks_6(),
	PlayerController_t4148409433::get_offset_of_numBooksCollected_7(),
	PlayerController_t4148409433::get_offset_of_wordDisplay_8(),
	PlayerController_t4148409433::get_offset_of_myRigidBody_9(),
	PlayerController_t4148409433::get_offset_of_myAnim_10(),
	PlayerController_t4148409433::get_offset_of_respawnPosition_11(),
	PlayerController_t4148409433::get_offset_of_groundCheck_12(),
	PlayerController_t4148409433::get_offset_of_groundCheckRadius_13(),
	PlayerController_t4148409433::get_offset_of_whatIsGround_14(),
	PlayerController_t4148409433::get_offset_of_isGrounded_15(),
	PlayerController_t4148409433::get_offset_of_isJumping_16(),
	PlayerController_t4148409433::get_offset_of_jumpSound_17(),
	PlayerController_t4148409433::get_offset_of_hurtSound_18(),
	PlayerController_t4148409433::get_offset_of_rightSound_19(),
	PlayerController_t4148409433::get_offset_of_wrongSound_20(),
	PlayerController_t4148409433::get_offset_of_collectSound_21(),
	PlayerController_t4148409433::get_offset_of_isPaused_22(),
	PlayerController_t4148409433::get_offset_of_health_23(),
	PlayerController_t4148409433::get_offset_of_bookNames_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1721 = { sizeof (PlayerPersistantData_t3855664020), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1721[6] = 
{
	PlayerPersistantData_t3855664020::get_offset_of_level_0(),
	PlayerPersistantData_t3855664020::get_offset_of_posX_1(),
	PlayerPersistantData_t3855664020::get_offset_of_posY_2(),
	PlayerPersistantData_t3855664020::get_offset_of_health_3(),
	PlayerPersistantData_t3855664020::get_offset_of_booksCollected_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1722 = { sizeof (QuestionCanvas_t2285535216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1722[2] = 
{
	QuestionCanvas_t2285535216::get_offset_of_enable_2(),
	QuestionCanvas_t2285535216::get_offset_of_canvas_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1723 = { sizeof (QuestionPanel_t1993000386), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1724 = { sizeof (ReviewScript_t922975391), -1, sizeof(ReviewScript_t922975391_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1724[7] = 
{
	0,
	ReviewScript_t922975391_StaticFields::get_offset_of_reviewNum_3(),
	ReviewScript_t922975391::get_offset_of_canSetRev_4(),
	ReviewScript_t922975391::get_offset_of_revWord1_5(),
	ReviewScript_t922975391::get_offset_of_revWord2_6(),
	ReviewScript_t922975391::get_offset_of_revWord3_7(),
	ReviewScript_t922975391::get_offset_of_revWord4_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1725 = { sizeof (SettingsScript_t2637859674), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1725[1] = 
{
	SettingsScript_t2637859674::get_offset_of_volumeSlider_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1726 = { sizeof (SlimeController_t906310484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1726[5] = 
{
	SlimeController_t906310484::get_offset_of_moveSpeed_2(),
	SlimeController_t906310484::get_offset_of_leftPoint_3(),
	SlimeController_t906310484::get_offset_of_rightPoint_4(),
	SlimeController_t906310484::get_offset_of_myRigidbody_5(),
	SlimeController_t906310484::get_offset_of_movingRight_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1727 = { sizeof (StompEnemy_t2282645357), -1, sizeof(StompEnemy_t2282645357_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1727[14] = 
{
	StompEnemy_t2282645357::get_offset_of_questionDisplay_2(),
	StompEnemy_t2282645357::get_offset_of_boss_3(),
	StompEnemy_t2282645357::get_offset_of_choice1_4(),
	StompEnemy_t2282645357::get_offset_of_choice2_5(),
	StompEnemy_t2282645357::get_offset_of_choice3_6(),
	StompEnemy_t2282645357::get_offset_of_choice4_7(),
	StompEnemy_t2282645357::get_offset_of_qCanvas_8(),
	StompEnemy_t2282645357::get_offset_of_panel_9(),
	StompEnemy_t2282645357::get_offset_of_answer_10(),
	StompEnemy_t2282645357::get_offset_of_button1_11(),
	StompEnemy_t2282645357::get_offset_of_button2_12(),
	StompEnemy_t2282645357::get_offset_of_button3_13(),
	StompEnemy_t2282645357::get_offset_of_button4_14(),
	StompEnemy_t2282645357_StaticFields::get_offset_of_ques_15(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
