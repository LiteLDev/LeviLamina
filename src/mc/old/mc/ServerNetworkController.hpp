/**
 * @file  ServerNetworkController.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerNetworkController.
 *
 */
class ServerNetworkController {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERNETWORKCONTROLLER
public:
    class ServerNetworkController& operator=(class ServerNetworkController const &) = delete;
    ServerNetworkController(class ServerNetworkController const &) = delete;
    ServerNetworkController() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerNetworkController();
    /**
     * @vftbl  1
     * @symbol  ?isDedicatedServer\@ServerNetworkController\@\@UEBA_NXZ
     */
    virtual bool isDedicatedServer() const;
    /**
     * @vftbl  2
     * @symbol  ?isHost\@ServerNetworkController\@\@UEBA_NAEBVUUID\@mce\@\@\@Z
     */
    virtual bool isHost(class mce::UUID const &) const;
    /**
     * @vftbl  3
     * @symbol  ?canChangePermission\@ServerNetworkController\@\@UEBA_NAEBVUUID\@mce\@\@AEBVServerPlayer\@\@\@Z
     */
    virtual bool canChangePermission(class mce::UUID const &, class ServerPlayer const &) const;
    /**
     * @symbol  ??0ServerNetworkController\@\@QEAA\@_NAEBVUUID\@mce\@\@V?$function\@$$A6A_NAEBVServerPlayer\@\@W4AbilitiesIndex\@\@\@Z\@std\@\@\@Z
     */
    MCAPI ServerNetworkController(bool, class mce::UUID const &, class std::function<bool (class ServerPlayer const &, enum class AbilitiesIndex)>);

};