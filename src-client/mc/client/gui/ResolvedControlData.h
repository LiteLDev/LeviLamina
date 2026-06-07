#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace UI::Resources { struct ResolvedPropertyData; }
namespace UI::Resources { struct ResolvedTextureData; }
// clang-format on

namespace UI::Resources {

struct ResolvedControlData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                        conrolName;
    ::ll::TypedStorage<8, 24, ::std::vector<::UI::Resources::ResolvedTextureData>>  textures;
    ::ll::TypedStorage<8, 24, ::std::vector<::UI::Resources::ResolvedPropertyData>> proeprties;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedControlData& operator=(ResolvedControlData const&);
    ResolvedControlData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResolvedControlData(::UI::Resources::ResolvedControlData const&);

    MCAPI ~ResolvedControlData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UI::Resources::ResolvedControlData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace UI::Resources
