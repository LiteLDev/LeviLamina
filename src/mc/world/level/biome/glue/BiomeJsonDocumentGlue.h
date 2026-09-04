#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IBiomeComponentGlue;
struct IBiomeEnvironmentAttributeGlue;
// clang-format on

struct BiomeJsonDocumentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::function<::std::shared_ptr<::IBiomeComponentGlue>()>>>
        mComponentGlueFactories;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::string, ::std::function<::std::shared_ptr<::IBiomeEnvironmentAttributeGlue>()>>>
        mEnvironmentAttributeGlueFactories;
    // NOLINTEND
};
