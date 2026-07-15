#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace JsonComponentGlueUtils {

class ActorPuvInput : public ::Puv::Input {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Json::Value> mJsonValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::SemVersion version() const /*override*/;

    virtual ::Puv::Input::Data data() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::SemVersion $version() const;

    MCFOLD ::Puv::Input::Data $data() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace JsonComponentGlueUtils
