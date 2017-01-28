#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnterNameScript
struct  EnterNameScript_t1431468338  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text EnterNameScript::NameInputFieldText
	Text_t356221433 * ___NameInputFieldText_2;
	// UnityEngine.UI.Text EnterNameScript::RequiredText
	Text_t356221433 * ___RequiredText_3;

public:
	inline static int32_t get_offset_of_NameInputFieldText_2() { return static_cast<int32_t>(offsetof(EnterNameScript_t1431468338, ___NameInputFieldText_2)); }
	inline Text_t356221433 * get_NameInputFieldText_2() const { return ___NameInputFieldText_2; }
	inline Text_t356221433 ** get_address_of_NameInputFieldText_2() { return &___NameInputFieldText_2; }
	inline void set_NameInputFieldText_2(Text_t356221433 * value)
	{
		___NameInputFieldText_2 = value;
		Il2CppCodeGenWriteBarrier(&___NameInputFieldText_2, value);
	}

	inline static int32_t get_offset_of_RequiredText_3() { return static_cast<int32_t>(offsetof(EnterNameScript_t1431468338, ___RequiredText_3)); }
	inline Text_t356221433 * get_RequiredText_3() const { return ___RequiredText_3; }
	inline Text_t356221433 ** get_address_of_RequiredText_3() { return &___RequiredText_3; }
	inline void set_RequiredText_3(Text_t356221433 * value)
	{
		___RequiredText_3 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
