/**
 * @file  ServerCommunicationInterface.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerCommunicationInterface.
 *
 */
class ServerCommunicationInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCOMMUNICATIONINTERFACE
public:
    class ServerCommunicationInterface& operator=(class ServerCommunicationInterface const &) = delete;
    ServerCommunicationInterface(class ServerCommunicationInterface const &) = delete;
    ServerCommunicationInterface() = delete;
#endif

public:
    /**
     * @hash   1402993379
     * @symbol ?sendServerStarted@ServerCommunicationInterface@@QEAAXXZ
     */
    MCAPI void sendServerStarted();
    /**
     * @hash   -981762992
     * @symbol ??1ServerCommunicationInterface@@QEAA@XZ
     */
    MCAPI ~ServerCommunicationInterface();
    /**
     * @hash   -1907152683
     * @symbol ?create@ServerCommunicationInterface@@SA?AV?$unique_ptr@VServerCommunicationInterface@@U?$default_delete@VServerCommunicationInterface@@@std@@@std@@AEBUNetworkAddress@@@Z
     */
    MCAPI static std::unique_ptr<class ServerCommunicationInterface> create(struct NetworkAddress const &);

//private:
    /**
     * @hash   182675533
     * @symbol ?communicate@ServerCommunicationInterface@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
     */
    MCAPI void communicate(std::string const &, class Json::Value const &);

private:

};