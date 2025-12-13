#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptBookError; }
namespace ScriptModuleMinecraft { struct ScriptBookPageContentError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidItemStackError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBookItemComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // prevent constructor by default
    ScriptBookItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBookItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBookItemComponent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );

    MCNAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
    _getAuthor() const;

    MCNAPI ::Scripting::
        Result<::std::vector<::std::optional<::std::string>>, ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
        _getContents() const;

    MCNAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
    _getPageContent(int index) const;

    MCNAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidItemStackError> _getPageCount() const;

    MCNAPI ::Scripting::Result<
        ::std::vector<::std::optional<::ScriptModuleMinecraft::ScriptRawMessageInterface>>,
        ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
    _getRawContents() const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::ScriptModuleMinecraft::ScriptRawMessageInterface>,
        ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
    _getRawPageContent(int index) const;

    MCNAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
    _getTitle() const;

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidItemStackError,
        ::ScriptModuleMinecraft::ScriptBookError,
        ::ScriptModuleMinecraft::ScriptBookPageContentError>
    _insertPage(
        int index,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> content
    );

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidItemStackError> _isSigned() const;

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidItemStackError> _removePage(int index);

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidItemStackError,
        ::ScriptModuleMinecraft::ScriptBookError,
        ::ScriptModuleMinecraft::ScriptBookPageContentError>
    _setContents(
        ::std::vector<::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>>> contents
    );

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidItemStackError,
        ::ScriptModuleMinecraft::ScriptBookError,
        ::ScriptModuleMinecraft::ScriptBookPageContentError>
    _setPageContent(
        int index,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> content
    );

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraft::ScriptInvalidItemStackError,
        ::ScriptModuleMinecraft::ScriptBookError>
    _signBook(::std::string const& title, ::std::string const& author);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCNAPI static ::std::string const& getTypeName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
