/**
 * @file  PacketObserver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PacketObserver.
 *
 */
class PacketObserver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETOBSERVER
public:
    class PacketObserver& operator=(class PacketObserver const &) = delete;
    PacketObserver(class PacketObserver const &) = delete;
    PacketObserver() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PacketObserver();
    /**
     * @vftbl  1
     * @symbol  ?packetSentTo\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@I\@Z
     */
    virtual void packetSentTo(class NetworkIdentifier const &, class Packet const &, unsigned int);
    /**
     * @vftbl  2
     * @symbol  ?packetReceivedFrom\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@I\@Z
     */
    virtual void packetReceivedFrom(class NetworkIdentifier const &, class Packet const &, unsigned int);
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  ?reset\@PacketObserver\@\@UEAAXXZ
     */
    virtual void reset();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKETOBSERVER
    /**
     * @symbol  ?dataReceivedFrom\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void dataReceivedFrom(class NetworkIdentifier const &, std::string const &);
    /**
     * @symbol  ?dataSentTo\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCVAPI void dataSentTo(class NetworkIdentifier const &, class gsl::basic_string_span<char const, -1>);
#endif

};