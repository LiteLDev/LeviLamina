#pragma once

#ifdef LLMONEY_EXPORTS
#define LLMONEY_API __declspec(dllexport)
#else
#define LLMONEY_API __declspec(dllimport)
#endif

#include <string>

typedef long long money_t;
typedef unsigned long long xuid_t;

enum LLMoneyEvent
{
	Set,Add,Reduce,Trans
};
typedef bool (*LLMoneyCallback)(LLMoneyEvent type, xuid_t from, xuid_t to, money_t value);


#ifdef __cplusplus
extern "C" {
#endif
	LLMONEY_API money_t LLMoneyGet(xuid_t xuid);
	LLMONEY_API bool LLMoneySet(xuid_t xuid, money_t money);
	LLMONEY_API bool LLMoneyTrans(xuid_t from, xuid_t to, money_t val, std::string const& note = "");
	LLMONEY_API bool LLMoneyAdd(xuid_t xuid, money_t money);
	LLMONEY_API bool LLMoneyReduce(xuid_t xuid, money_t money);

	LLMONEY_API std::string LLMoneyGetHist(xuid_t xuid, int timediff = 24 * 60 * 60);
	LLMONEY_API void LLMoneyClearHist(int difftime = 0);

	LLMONEY_API void LLMoneyListenBeforeEvent(LLMoneyCallback callback);
	LLMONEY_API void LLMoneyListenAfterEvent(LLMoneyCallback callback);
#ifdef __cplusplus
}
#endif



















// Old interface
// Just for compatibility
// Do not use
namespace Money
{
	LLMONEY_API money_t getMoney(xuid_t xuid);
	LLMONEY_API std::string getTransHist(xuid_t xuid, int timediff = 24 * 60 * 60);
	LLMONEY_API bool createTrans(xuid_t from, xuid_t to, money_t val, std::string const& note = "");
	LLMONEY_API bool setMoney(xuid_t xuid, money_t money);
	LLMONEY_API bool reduceMoney(xuid_t xuid, money_t money);
	LLMONEY_API void purgeHist(int difftime = 0);
}