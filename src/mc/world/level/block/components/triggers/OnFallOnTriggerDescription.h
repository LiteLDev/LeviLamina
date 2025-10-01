#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/triggers/BlockTriggerDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentFactory;
class BlockComponentStorage;
class OnFallOnTrigger;
struct BlockComponentGroupDescription;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OnFallOnTriggerDescription : public ::BlockTriggerDescription<::OnFallOnTrigger> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk78c2e0;
    // NOLINTEND

public:
    // prevent constructor by default
    OnFallOnTriggerDescription& operator=(OnFallOnTriggerDescription const&);
    OnFallOnTriggerDescription(OnFallOnTriggerDescription const&);
    OnFallOnTriggerDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 2
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 6
    virtual void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockComponentGroupDescription>>&
                                       componentSchema,
        ::BlockComponentFactory const& factory
    ) const /*override*/;

    // vIndex: 0
    virtual ~OnFallOnTriggerDescription() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockComponentGroupDescription>>&
                                       componentSchema,
        ::BlockComponentFactory const& factory
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
