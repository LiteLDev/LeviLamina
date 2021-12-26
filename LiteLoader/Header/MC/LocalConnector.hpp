// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Social.hpp"
#include "Connector.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LocalConnector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCALCONNECTOR
public:
    class LocalConnector& operator=(class LocalConnector const&) = delete;
    LocalConnector(class LocalConnector const&) = delete;
    LocalConnector() = delete;
#endif

public:
    /*0*/ virtual ~LocalConnector();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual std::string getLocalIp();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual class Social::GameConnectionInfo const& getConnectedGameInfo() const;
    /*6*/ virtual void __unk_vfn_3();
    /*7*/ virtual struct Connector::NatPunchInfo getNatPunchInfo() const;
    /*8*/ virtual void __unk_vfn_4();
    /*9*/ virtual void __unk_vfn_5();
    /*10*/ virtual void __unk_vfn_6();
    /*11*/ virtual void __unk_vfn_7();
    /*12*/ virtual void __unk_vfn_8();
    /*13*/ virtual void __unk_vfn_9();
    /*14*/ virtual void __unk_vfn_10();
    /*
    inline bool isIPv4Supported() const{
        bool (LocalConnector::*rv)() const;
        *((void**)&rv) = dlsym("?isIPv4Supported@LocalConnector@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isIPv6Supported() const{
        bool (LocalConnector::*rv)() const;
        *((void**)&rv) = dlsym("?isIPv6Supported@LocalConnector@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline unsigned short getIPv6Port() const{
        unsigned short (LocalConnector::*rv)() const;
        *((void**)&rv) = dlsym("?getIPv6Port@LocalConnector@@UEBAGXZ");
        return (this->*rv)();
    }
    inline unsigned short getIPv4Port() const{
        unsigned short (LocalConnector::*rv)() const;
        *((void**)&rv) = dlsym("?getIPv4Port@LocalConnector@@UEBAGXZ");
        return (this->*rv)();
    }
    inline unsigned short getPort() const{
        unsigned short (LocalConnector::*rv)() const;
        *((void**)&rv) = dlsym("?getPort@LocalConnector@@UEBAGXZ");
        return (this->*rv)();
    }
    inline void startNatPunchingClient(std::string const& a0, unsigned short a1){
        void (LocalConnector::*rv)(std::string const&, unsigned short);
        *((void**)&rv) = dlsym("?startNatPunchingClient@LocalConnector@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<unsigned short>(a1));
    }
    inline void removeConnectionStateListener(class Connector::ConnectionStateListener* a0){
        void (LocalConnector::*rv)(class Connector::ConnectionStateListener*);
        *((void**)&rv) = dlsym("?removeConnectionStateListener@LocalConnector@@UEAAXPEAVConnectionStateListener@Connector@@@Z");
        return (this->*rv)(std::forward<class Connector::ConnectionStateListener*>(a0));
    }
    inline void addConnectionStateListener(class Connector::ConnectionStateListener* a0){
        void (LocalConnector::*rv)(class Connector::ConnectionStateListener*);
        *((void**)&rv) = dlsym("?addConnectionStateListener@LocalConnector@@UEAAXPEAVConnectionStateListener@Connector@@@Z");
        return (this->*rv)(std::forward<class Connector::ConnectionStateListener*>(a0));
    }
    inline void setupNatPunch(bool a0){
        void (LocalConnector::*rv)(bool);
        *((void**)&rv) = dlsym("?setupNatPunch@LocalConnector@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const{
        std::vector<struct RakNet::SystemAddress> (LocalConnector::*rv)() const;
        *((void**)&rv) = dlsym("?getRefinedLocalIps@LocalConnector@@UEBA?AV?$vector@USystemAddress@RakNet@@V?$allocator@USystemAddress@RakNet@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline std::vector<std::string> getLocalIps() const{
        std::vector<std::string> (LocalConnector::*rv)() const;
        *((void**)&rv) = dlsym("?getLocalIps@LocalConnector@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI void disconnect();
    MCAPI void runEvents();

protected:

private:
    MCAPI static class LocalConnectivitySystem sLocalConnectivitySystem;

};