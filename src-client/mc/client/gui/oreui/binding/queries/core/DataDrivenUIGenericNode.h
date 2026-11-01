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
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>, ::std::optional<::std::string>>>
        mComponent;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>, ::std::optional<::std::string>>> mText;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>, ::std::optional<::std::string>>>
        mDynamicAttribs;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::DataDrivenUIGenericNode, ::OreUI::DataDrivenUIGenericNode>>
        mChildrenNodes;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIGenericNode& operator=(DataDrivenUIGenericNode const&);
    DataDrivenUIGenericNode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenUIGenericNode() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenUIGenericNode(::OreUI::DataDrivenUIGenericNode const& other);

    MCNAPI DataDrivenUIGenericNode(::OreUI::DataDrivenUIGenericNode&& other);

    MCNAPI DataDrivenUIGenericNode(
        ::std::optional<::std::string>                  component,
        ::std::optional<::std::string>                  text,
        ::std::optional<::std::string>                  dynamicAttribs,
        ::std::vector<::OreUI::DataDrivenUIGenericNode> childrenNodes
    );

    MCNAPI DataDrivenUIGenericNode(
        ::std::optional<::std::string> component,
        ::std::optional<::std::string> text,
        ::std::optional<::std::string> dynamicAttribs,
        ::OreUI::PropertyVector<::OreUI::DataDrivenUIGenericNode, ::OreUI::DataDrivenUIGenericNode> const& childrenNodes
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::DataDrivenUIGenericNode const& other);

    MCNAPI void* $ctor(::OreUI::DataDrivenUIGenericNode&& other);

    MCNAPI void* $ctor(
        ::std::optional<::std::string>                  component,
        ::std::optional<::std::string>                  text,
        ::std::optional<::std::string>                  dynamicAttribs,
        ::std::vector<::OreUI::DataDrivenUIGenericNode> childrenNodes
    );

    MCNAPI void* $ctor(
        ::std::optional<::std::string> component,
        ::std::optional<::std::string> text,
        ::std::optional<::std::string> dynamicAttribs,
        ::OreUI::PropertyVector<::OreUI::DataDrivenUIGenericNode, ::OreUI::DataDrivenUIGenericNode> const& childrenNodes
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
