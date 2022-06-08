// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IRequestAction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RequestActionLoader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTACTIONLOADER
public:
    class RequestActionLoader& operator=(class RequestActionLoader const &) = delete;
    RequestActionLoader(class RequestActionLoader const &) = delete;
    RequestActionLoader() = delete;
#endif

public:
    MCAPI static bool isValidTag(enum IRequestAction::RequestActionType, class CompoundTag const &);
    MCAPI static std::unique_ptr<class IRequestAction> load(enum IRequestAction::RequestActionType, class CompoundTag const &, class ICommandOriginLoader &, std::string const &);

protected:

private:

};