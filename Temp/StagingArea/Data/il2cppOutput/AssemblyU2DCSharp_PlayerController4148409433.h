#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameButtons
struct GameButtons_t3753496245;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// HealthBar
struct HealthBar_t1323021899;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// GameButtons PlayerController::gameButton
	GameButtons_t3753496245 * ___gameButton_2;
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_3;
	// System.Single PlayerController::jumpSpeed
	float ___jumpSpeed_4;
	// System.Int32 PlayerController::numBooks
	int32_t ___numBooks_5;
	// System.Int32 PlayerController::maxBooks
	int32_t ___maxBooks_6;
	// UnityEngine.UI.Text PlayerController::numBooksCollected
	Text_t356221433 * ___numBooksCollected_7;
	// UnityEngine.UI.Text PlayerController::wordDisplay
	Text_t356221433 * ___wordDisplay_8;
	// UnityEngine.Rigidbody2D PlayerController::myRigidBody
	Rigidbody2D_t502193897 * ___myRigidBody_9;
	// UnityEngine.Animator PlayerController::myAnim
	Animator_t69676727 * ___myAnim_10;
	// UnityEngine.Vector3 PlayerController::respawnPosition
	Vector3_t2243707580  ___respawnPosition_11;
	// UnityEngine.Transform PlayerController::groundCheck
	Transform_t3275118058 * ___groundCheck_12;
	// System.Single PlayerController::groundCheckRadius
	float ___groundCheckRadius_13;
	// UnityEngine.LayerMask PlayerController::whatIsGround
	LayerMask_t3188175821  ___whatIsGround_14;
	// System.Boolean PlayerController::isGrounded
	bool ___isGrounded_15;
	// System.Boolean PlayerController::isJumping
	bool ___isJumping_16;
	// UnityEngine.AudioSource PlayerController::jumpSound
	AudioSource_t1135106623 * ___jumpSound_17;
	// UnityEngine.AudioSource PlayerController::hurtSound
	AudioSource_t1135106623 * ___hurtSound_18;
	// UnityEngine.AudioSource PlayerController::rightSound
	AudioSource_t1135106623 * ___rightSound_19;
	// UnityEngine.AudioSource PlayerController::wrongSound
	AudioSource_t1135106623 * ___wrongSound_20;
	// UnityEngine.AudioSource PlayerController::collectSound
	AudioSource_t1135106623 * ___collectSound_21;
	// System.Boolean PlayerController::isPaused
	bool ___isPaused_22;
	// HealthBar PlayerController::health
	HealthBar_t1323021899 * ___health_23;
	// System.Collections.Generic.List`1<System.String> PlayerController::bookNames
	List_1_t1398341365 * ___bookNames_24;

public:
	inline static int32_t get_offset_of_gameButton_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___gameButton_2)); }
	inline GameButtons_t3753496245 * get_gameButton_2() const { return ___gameButton_2; }
	inline GameButtons_t3753496245 ** get_address_of_gameButton_2() { return &___gameButton_2; }
	inline void set_gameButton_2(GameButtons_t3753496245 * value)
	{
		___gameButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameButton_2, value);
	}

	inline static int32_t get_offset_of_moveSpeed_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___moveSpeed_3)); }
	inline float get_moveSpeed_3() const { return ___moveSpeed_3; }
	inline float* get_address_of_moveSpeed_3() { return &___moveSpeed_3; }
	inline void set_moveSpeed_3(float value)
	{
		___moveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___jumpSpeed_4)); }
	inline float get_jumpSpeed_4() const { return ___jumpSpeed_4; }
	inline float* get_address_of_jumpSpeed_4() { return &___jumpSpeed_4; }
	inline void set_jumpSpeed_4(float value)
	{
		___jumpSpeed_4 = value;
	}

	inline static int32_t get_offset_of_numBooks_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___numBooks_5)); }
	inline int32_t get_numBooks_5() const { return ___numBooks_5; }
	inline int32_t* get_address_of_numBooks_5() { return &___numBooks_5; }
	inline void set_numBooks_5(int32_t value)
	{
		___numBooks_5 = value;
	}

	inline static int32_t get_offset_of_maxBooks_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___maxBooks_6)); }
	inline int32_t get_maxBooks_6() const { return ___maxBooks_6; }
	inline int32_t* get_address_of_maxBooks_6() { return &___maxBooks_6; }
	inline void set_maxBooks_6(int32_t value)
	{
		___maxBooks_6 = value;
	}

	inline static int32_t get_offset_of_numBooksCollected_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___numBooksCollected_7)); }
	inline Text_t356221433 * get_numBooksCollected_7() const { return ___numBooksCollected_7; }
	inline Text_t356221433 ** get_address_of_numBooksCollected_7() { return &___numBooksCollected_7; }
	inline void set_numBooksCollected_7(Text_t356221433 * value)
	{
		___numBooksCollected_7 = value;
		Il2CppCodeGenWriteBarrier(&___numBooksCollected_7, value);
	}

	inline static int32_t get_offset_of_wordDisplay_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___wordDisplay_8)); }
	inline Text_t356221433 * get_wordDisplay_8() const { return ___wordDisplay_8; }
	inline Text_t356221433 ** get_address_of_wordDisplay_8() { return &___wordDisplay_8; }
	inline void set_wordDisplay_8(Text_t356221433 * value)
	{
		___wordDisplay_8 = value;
		Il2CppCodeGenWriteBarrier(&___wordDisplay_8, value);
	}

	inline static int32_t get_offset_of_myRigidBody_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___myRigidBody_9)); }
	inline Rigidbody2D_t502193897 * get_myRigidBody_9() const { return ___myRigidBody_9; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRigidBody_9() { return &___myRigidBody_9; }
	inline void set_myRigidBody_9(Rigidbody2D_t502193897 * value)
	{
		___myRigidBody_9 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidBody_9, value);
	}

	inline static int32_t get_offset_of_myAnim_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___myAnim_10)); }
	inline Animator_t69676727 * get_myAnim_10() const { return ___myAnim_10; }
	inline Animator_t69676727 ** get_address_of_myAnim_10() { return &___myAnim_10; }
	inline void set_myAnim_10(Animator_t69676727 * value)
	{
		___myAnim_10 = value;
		Il2CppCodeGenWriteBarrier(&___myAnim_10, value);
	}

	inline static int32_t get_offset_of_respawnPosition_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___respawnPosition_11)); }
	inline Vector3_t2243707580  get_respawnPosition_11() const { return ___respawnPosition_11; }
	inline Vector3_t2243707580 * get_address_of_respawnPosition_11() { return &___respawnPosition_11; }
	inline void set_respawnPosition_11(Vector3_t2243707580  value)
	{
		___respawnPosition_11 = value;
	}

	inline static int32_t get_offset_of_groundCheck_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___groundCheck_12)); }
	inline Transform_t3275118058 * get_groundCheck_12() const { return ___groundCheck_12; }
	inline Transform_t3275118058 ** get_address_of_groundCheck_12() { return &___groundCheck_12; }
	inline void set_groundCheck_12(Transform_t3275118058 * value)
	{
		___groundCheck_12 = value;
		Il2CppCodeGenWriteBarrier(&___groundCheck_12, value);
	}

	inline static int32_t get_offset_of_groundCheckRadius_13() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___groundCheckRadius_13)); }
	inline float get_groundCheckRadius_13() const { return ___groundCheckRadius_13; }
	inline float* get_address_of_groundCheckRadius_13() { return &___groundCheckRadius_13; }
	inline void set_groundCheckRadius_13(float value)
	{
		___groundCheckRadius_13 = value;
	}

	inline static int32_t get_offset_of_whatIsGround_14() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___whatIsGround_14)); }
	inline LayerMask_t3188175821  get_whatIsGround_14() const { return ___whatIsGround_14; }
	inline LayerMask_t3188175821 * get_address_of_whatIsGround_14() { return &___whatIsGround_14; }
	inline void set_whatIsGround_14(LayerMask_t3188175821  value)
	{
		___whatIsGround_14 = value;
	}

	inline static int32_t get_offset_of_isGrounded_15() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isGrounded_15)); }
	inline bool get_isGrounded_15() const { return ___isGrounded_15; }
	inline bool* get_address_of_isGrounded_15() { return &___isGrounded_15; }
	inline void set_isGrounded_15(bool value)
	{
		___isGrounded_15 = value;
	}

	inline static int32_t get_offset_of_isJumping_16() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isJumping_16)); }
	inline bool get_isJumping_16() const { return ___isJumping_16; }
	inline bool* get_address_of_isJumping_16() { return &___isJumping_16; }
	inline void set_isJumping_16(bool value)
	{
		___isJumping_16 = value;
	}

	inline static int32_t get_offset_of_jumpSound_17() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___jumpSound_17)); }
	inline AudioSource_t1135106623 * get_jumpSound_17() const { return ___jumpSound_17; }
	inline AudioSource_t1135106623 ** get_address_of_jumpSound_17() { return &___jumpSound_17; }
	inline void set_jumpSound_17(AudioSource_t1135106623 * value)
	{
		___jumpSound_17 = value;
		Il2CppCodeGenWriteBarrier(&___jumpSound_17, value);
	}

	inline static int32_t get_offset_of_hurtSound_18() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___hurtSound_18)); }
	inline AudioSource_t1135106623 * get_hurtSound_18() const { return ___hurtSound_18; }
	inline AudioSource_t1135106623 ** get_address_of_hurtSound_18() { return &___hurtSound_18; }
	inline void set_hurtSound_18(AudioSource_t1135106623 * value)
	{
		___hurtSound_18 = value;
		Il2CppCodeGenWriteBarrier(&___hurtSound_18, value);
	}

	inline static int32_t get_offset_of_rightSound_19() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rightSound_19)); }
	inline AudioSource_t1135106623 * get_rightSound_19() const { return ___rightSound_19; }
	inline AudioSource_t1135106623 ** get_address_of_rightSound_19() { return &___rightSound_19; }
	inline void set_rightSound_19(AudioSource_t1135106623 * value)
	{
		___rightSound_19 = value;
		Il2CppCodeGenWriteBarrier(&___rightSound_19, value);
	}

	inline static int32_t get_offset_of_wrongSound_20() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___wrongSound_20)); }
	inline AudioSource_t1135106623 * get_wrongSound_20() const { return ___wrongSound_20; }
	inline AudioSource_t1135106623 ** get_address_of_wrongSound_20() { return &___wrongSound_20; }
	inline void set_wrongSound_20(AudioSource_t1135106623 * value)
	{
		___wrongSound_20 = value;
		Il2CppCodeGenWriteBarrier(&___wrongSound_20, value);
	}

	inline static int32_t get_offset_of_collectSound_21() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___collectSound_21)); }
	inline AudioSource_t1135106623 * get_collectSound_21() const { return ___collectSound_21; }
	inline AudioSource_t1135106623 ** get_address_of_collectSound_21() { return &___collectSound_21; }
	inline void set_collectSound_21(AudioSource_t1135106623 * value)
	{
		___collectSound_21 = value;
		Il2CppCodeGenWriteBarrier(&___collectSound_21, value);
	}

	inline static int32_t get_offset_of_isPaused_22() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isPaused_22)); }
	inline bool get_isPaused_22() const { return ___isPaused_22; }
	inline bool* get_address_of_isPaused_22() { return &___isPaused_22; }
	inline void set_isPaused_22(bool value)
	{
		___isPaused_22 = value;
	}

	inline static int32_t get_offset_of_health_23() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___health_23)); }
	inline HealthBar_t1323021899 * get_health_23() const { return ___health_23; }
	inline HealthBar_t1323021899 ** get_address_of_health_23() { return &___health_23; }
	inline void set_health_23(HealthBar_t1323021899 * value)
	{
		___health_23 = value;
		Il2CppCodeGenWriteBarrier(&___health_23, value);
	}

	inline static int32_t get_offset_of_bookNames_24() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___bookNames_24)); }
	inline List_1_t1398341365 * get_bookNames_24() const { return ___bookNames_24; }
	inline List_1_t1398341365 ** get_address_of_bookNames_24() { return &___bookNames_24; }
	inline void set_bookNames_24(List_1_t1398341365 * value)
	{
		___bookNames_24 = value;
		Il2CppCodeGenWriteBarrier(&___bookNames_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
