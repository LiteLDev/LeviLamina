/**
 * @file  ScorePacketInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
#include "ScoreboardId.hpp"
#include "IdentityDefinition.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC structure ScorePacketInfo.
 *
 */
struct ScorePacketInfo {

#define AFTER_EXTRA
public:
#define DISABLE_CONSTRUCTOR_PREVENTION_SCOREPACKETINFO

    ScoreboardId sid;              //0
    std::string obj_name;          //16
    uint32_t score;                //48
    IdentityDefinition::Type type; //52
    unsigned long long pid;        //56
    ActorUniqueID aid;             //64
    std::string fake_name;         //72

    ScorePacketInfo(ScoreboardId* s, string obj_name, IdentityDefinition::Type type, unsigned num, const string& fake)
        : sid(*s)
        , obj_name(obj_name)
        , type(type)
        , score(num)
        , fake_name(fake) {
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREPACKETINFO
public:
    struct ScorePacketInfo& operator=(struct ScorePacketInfo const &) = delete;
    ScorePacketInfo(struct ScorePacketInfo const &) = delete;
    ScorePacketInfo() = delete;
#endif

public:
    /**
     * @symbol  ??1ScorePacketInfo\@\@QEAA\@XZ
     */
    MCAPI ~ScorePacketInfo();

};