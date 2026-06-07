#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class Vec3Option : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3> mValue;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mDefaultValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;

    virtual void load(::std::string const&) /*override*/;

    virtual void load(::Json::Value const& valueJson) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void reset(bool saveOptionChange);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
