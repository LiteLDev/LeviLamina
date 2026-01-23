#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentGroupDescription;
namespace SharedTypes::v1_21_110::BlockDefinition { struct BlockComponents; }
// clang-format on

struct BlockDefinitionDocumentComponentTransformer {
public:
    // BlockDefinitionDocumentComponentTransformer inner types define
    using TransformFunction = ::std::function<
        void(::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const&, ::BlockComponentGroupDescription&)>;

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<
        ::std::string_view,
        ::std::function<void(
            ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const&,
            ::BlockComponentGroupDescription&
        )>>&
    mTransformers();
    // NOLINTEND
};
