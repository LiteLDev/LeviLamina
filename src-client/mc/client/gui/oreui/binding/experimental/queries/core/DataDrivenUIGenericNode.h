#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyVector.h"

namespace OreUI::Experimental {

class DataDrivenUIGenericNode
: public ::OreUI::Experimental::PropertyObject<::OreUI::Experimental::DataDrivenUIGenericNode> {
public:
    // DataDrivenUIGenericNode inner types define
    using Base = ::OreUI::Experimental::PropertyObject<::OreUI::Experimental::DataDrivenUIGenericNode>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 208, ::OreUI::Experimental::Property<::std::optional<::std::string>>> mTag;
    ::ll::TypedStorage<8, 208, ::OreUI::Experimental::Property<::std::optional<::std::string>>> mText;
    ::ll::TypedStorage<8, 208, ::OreUI::Experimental::Property<::std::optional<::std::string>>> mDynamicAttribs;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::Experimental::PropertyVector<
            ::OreUI::Experimental::DataDrivenUIGenericNode,
            ::std::allocator<::OreUI::Experimental::DataDrivenUIGenericNode>>>
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
    MCAPI DataDrivenUIGenericNode(::OreUI::Experimental::DataDrivenUIGenericNode&& other);

    MCAPI DataDrivenUIGenericNode(
        ::std::optional<::std::string> tag,
        ::std::optional<::std::string> text,
        ::std::optional<::std::string> dynamicAttribs,
        ::OreUI::Experimental::PropertyVector<
            ::OreUI::Experimental::DataDrivenUIGenericNode,
            ::std::allocator<::OreUI::Experimental::DataDrivenUIGenericNode>> const& childrenNodes
    );

    MCAPI DataDrivenUIGenericNode(
        ::std::optional<::std::string>                                tag,
        ::std::optional<::std::string>                                text,
        ::std::optional<::std::string>                                dynamicAttribs,
        ::std::vector<::OreUI::Experimental::DataDrivenUIGenericNode> childrenNodes
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::DataDrivenUIGenericNode&& other);

    MCAPI void* $ctor(
        ::std::optional<::std::string> tag,
        ::std::optional<::std::string> text,
        ::std::optional<::std::string> dynamicAttribs,
        ::OreUI::Experimental::PropertyVector<
            ::OreUI::Experimental::DataDrivenUIGenericNode,
            ::std::allocator<::OreUI::Experimental::DataDrivenUIGenericNode>> const& childrenNodes
    );

    MCAPI void* $ctor(
        ::std::optional<::std::string>                                tag,
        ::std::optional<::std::string>                                text,
        ::std::optional<::std::string>                                dynamicAttribs,
        ::std::vector<::OreUI::Experimental::DataDrivenUIGenericNode> childrenNodes
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

} // namespace OreUI::Experimental
