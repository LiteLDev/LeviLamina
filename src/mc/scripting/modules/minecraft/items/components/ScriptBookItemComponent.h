#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBookError; }
namespace ScriptModuleMinecraft { struct ScriptBookPageContentError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidItemStackError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBookItemComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // ScriptBookItemComponent inner types define
    using ContentType = ::std::variant<
        ::std::string,
        ::ScriptModuleMinecraft::ScriptRawMessageInterface,
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBookItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
    _getAuthor() const;

    MCAPI ::Scripting::
        Result<::std::vector<::std::optional<::std::string>>, ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
        _getContents() const;

    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidItemStackError> _getPageCount() const;

    MCAPI ::Scripting::Result<
        ::std::vector<::std::optional<::ScriptModuleMinecraft::ScriptRawMessageInterface>>,
        ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
    _getRawContents() const;

    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
    _getTitle() const;

    MCAPI ::Scripting::Result<
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

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidItemStackError> _isSigned() const;

    MCAPI ::Scripting::Result<
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
