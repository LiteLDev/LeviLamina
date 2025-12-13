#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentDescription;
namespace SharedTypes::v1_21_110::BlockDefinition { struct BlockComponents; }
// clang-format on

struct BlockComponentDescriptionTransformer {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<
        ::std::string_view,
        ::std::function<
            void(::BlockComponentDescription const&, ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents&)>>&
    mTransformers();
    // NOLINTEND
};
