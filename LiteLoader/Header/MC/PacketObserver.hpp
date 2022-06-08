// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

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
    /*0*/ virtual ~PacketObserver();
    /*1*/ virtual void packetSentTo(class NetworkIdentifier const &, class Packet const &, unsigned int);
    /*2*/ virtual void packetReceivedFrom(class NetworkIdentifier const &, class Packet const &, unsigned int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKETOBSERVER
public:
    MCVAPI void dataReceivedFrom(class NetworkIdentifier const &, std::string const &);
    MCVAPI void dataSentTo(class NetworkIdentifier const &, class gsl::basic_string_span<char const, -1>);
#endif



};