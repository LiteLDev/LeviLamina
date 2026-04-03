#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

namespace OreUI {

class DataDrivenUIGenericNode : public ::OreUI::PropertyObject<::OreUI::DataDrivenUIGenericNode> {
public:
    // DataDrivenUIGenericNode inner types define
    using Base = ::OreUI::PropertyObject<::OreUI::DataDrivenUIGenericNode>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mComponent;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mText;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mDynamicAttribs;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::DataDrivenUIGenericNode, ::std::allocator<::OreUI::DataDrivenUIGenericNode>>>
        mChildrenNodes;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIGenericNode& operator=(DataDrivenUIGenericNode const&);
    DataDrivenUIGenericNode(DataDrivenUIGenericNode const&);
    DataDrivenUIGenericNode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenUIGenericNode() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataDrivenUIGenericNode(::OreUI::DataDrivenUIGenericNode&& other);

    MCAPI DataDrivenUIGenericNode(
        ::std::optional<::std::string>                  component,
        ::std::optional<::std::string>                  text,
        ::std::optional<::std::string>                  dynamicAttribs,
        ::std::vector<::OreUI::DataDrivenUIGenericNode> childrenNodes
    );

    MCAPI DataDrivenUIGenericNode(
        ::std::optional<::std::string> component,
        ::std::optional<::std::string> text,
        ::std::optional<::std::string> dynamicAttribs,
        ::OreUI::PropertyVector<
            ::OreUI::DataDrivenUIGenericNode,
            ::std::allocator<::OreUI::DataDrivenUIGenericNode>> const& childrenNodes
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::DataDrivenUIGenericNode&& other);

    MCAPI void* $ctor(
        ::std::optional<::std::string>                  component,
        ::std::optional<::std::string>                  text,
        ::std::optional<::std::string>                  dynamicAttribs,
        ::std::vector<::OreUI::DataDrivenUIGenericNode> childrenNodes
    );

    MCAPI void* $ctor(
        ::std::optional<::std::string> component,
        ::std::optional<::std::string> text,
        ::std::optional<::std::string> dynamicAttribs,
        ::OreUI::PropertyVector<
            ::OreUI::DataDrivenUIGenericNode,
            ::std::allocator<::OreUI::DataDrivenUIGenericNode>> const& childrenNodes
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
