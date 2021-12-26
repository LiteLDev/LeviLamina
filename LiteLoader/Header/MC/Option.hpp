// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Option {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPTION
public:
    class Option& operator=(class Option const&) = delete;
    Option(class Option const&) = delete;
    Option() = delete;
#endif

public:
    /*0*/ virtual ~Option();
    /*1*/ virtual void __unk_vfn_0() = 0;
    /*2*/ virtual void load(class std::map<std::string, std::string, struct std::less<std::string >, class std::allocator<struct std::pair<std::string const, std::string > > >&);
    /*3*/ virtual void load(class Json::Value const&);
    /*4*/ virtual void __unk_vfn_1() = 0;
    MCAPI Option(enum OptionID, enum OptionOwnerType, enum OptionResetFlags, std::string const&, std::string const&, enum OptionType);
    MCAPI bool getBool() const;
    MCAPI class Bedrock::PubSub::Subscription registerLock(class std::function<void (bool& )>);
    MCAPI class Bedrock::PubSub::Subscription registerObserver(class std::function<void (class Option const& )>);
    MCAPI static bool read(std::string const&, bool&);

protected:

private:
    MCAPI void _updatePropertyVector(std::vector<struct std::pair<std::string, std::string >>&, std::string const&);

};