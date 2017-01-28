#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// BossQuestions
struct BossQuestions_t4231512970;
// System.String
struct String_t;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void BossQuestions::.ctor()
extern "C"  void BossQuestions__ctor_m961505931 (BossQuestions_t4231512970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::Start()
extern "C"  void BossQuestions_Start_m1105726927 (BossQuestions_t4231512970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::Update()
extern "C"  void BossQuestions_Update_m2168663960 (BossQuestions_t4231512970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::isInRevInd(System.Int32)
extern "C"  bool BossQuestions_isInRevInd_m261418053 (BossQuestions_t4231512970 * __this, int32_t ___check0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::isRevWord(System.String)
extern "C"  bool BossQuestions_isRevWord_m1079634152 (BossQuestions_t4231512970 * __this, String_t* ___check0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::isQuesUsed(System.String)
extern "C"  bool BossQuestions_isQuesUsed_m1550751394 (BossQuestions_t4231512970 * __this, String_t* ___check0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::parseCorrectWords()
extern "C"  void BossQuestions_parseCorrectWords_m1260554705 (BossQuestions_t4231512970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::parseStr(System.String)
extern "C"  void BossQuestions_parseStr_m114731633 (BossQuestions_t4231512970 * __this, String_t* ___toParse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BossQuestions::pickQuestion()
extern "C"  String_t* BossQuestions_pickQuestion_m246462349 (BossQuestions_t4231512970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::assignAnswers(System.String)
extern "C"  void BossQuestions_assignAnswers_m3052296635 (BossQuestions_t4231512970 * __this, String_t* ___correct0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::isQuestionUsed(System.String)
extern "C"  bool BossQuestions_isQuestionUsed_m3388584532 (BossQuestions_t4231512970 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::checkAnswer(System.String)
extern "C"  bool BossQuestions_checkAnswer_m1449437555 (BossQuestions_t4231512970 * __this, String_t* ___playerAnswer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void BossQuestions_OnTriggerEnter2D_m801461239 (BossQuestions_t4231512970 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
