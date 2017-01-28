#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// HealthBar
struct HealthBar_t1323021899;
// BossHealthBar
struct BossHealthBar_t897985056;
// PlayerController
struct PlayerController_t4148409433;
// GameButtons
struct GameButtons_t3753496245;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonPushed
struct  ButtonPushed_t1344210563  : public MonoBehaviour_t1158329972
{
public:
	// System.String ButtonPushed::Name
	String_t* ___Name_2;
	// System.Int32 ButtonPushed::chosen
	int32_t ___chosen_3;
	// System.Int32 ButtonPushed::correct_answer
	int32_t ___correct_answer_4;
	// HealthBar ButtonPushed::Health
	HealthBar_t1323021899 * ___Health_5;
	// BossHealthBar ButtonPushed::bossHealth
	BossHealthBar_t897985056 * ___bossHealth_6;
	// PlayerController ButtonPushed::player
	PlayerController_t4148409433 * ___player_7;
	// GameButtons ButtonPushed::clear
	GameButtons_t3753496245 * ___clear_8;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier(&___Name_2, value);
	}

	inline static int32_t get_offset_of_chosen_3() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___chosen_3)); }
	inline int32_t get_chosen_3() const { return ___chosen_3; }
	inline int32_t* get_address_of_chosen_3() { return &___chosen_3; }
	inline void set_chosen_3(int32_t value)
	{
		___chosen_3 = value;
	}

	inline static int32_t get_offset_of_correct_answer_4() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___correct_answer_4)); }
	inline int32_t get_correct_answer_4() const { return ___correct_answer_4; }
	inline int32_t* get_address_of_correct_answer_4() { return &___correct_answer_4; }
	inline void set_correct_answer_4(int32_t value)
	{
		___correct_answer_4 = value;
	}

	inline static int32_t get_offset_of_Health_5() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___Health_5)); }
	inline HealthBar_t1323021899 * get_Health_5() const { return ___Health_5; }
	inline HealthBar_t1323021899 ** get_address_of_Health_5() { return &___Health_5; }
	inline void set_Health_5(HealthBar_t1323021899 * value)
	{
		___Health_5 = value;
		Il2CppCodeGenWriteBarrier(&___Health_5, value);
	}

	inline static int32_t get_offset_of_bossHealth_6() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___bossHealth_6)); }
	inline BossHealthBar_t897985056 * get_bossHealth_6() const { return ___bossHealth_6; }
	inline BossHealthBar_t897985056 ** get_address_of_bossHealth_6() { return &___bossHealth_6; }
	inline void set_bossHealth_6(BossHealthBar_t897985056 * value)
	{
		___bossHealth_6 = value;
		Il2CppCodeGenWriteBarrier(&___bossHealth_6, value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___player_7)); }
	inline PlayerController_t4148409433 * get_player_7() const { return ___player_7; }
	inline PlayerController_t4148409433 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(PlayerController_t4148409433 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_clear_8() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___clear_8)); }
	inline GameButtons_t3753496245 * get_clear_8() const { return ___clear_8; }
	inline GameButtons_t3753496245 ** get_address_of_clear_8() { return &___clear_8; }
	inline void set_clear_8(GameButtons_t3753496245 * value)
	{
		___clear_8 = value;
		Il2CppCodeGenWriteBarrier(&___clear_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
