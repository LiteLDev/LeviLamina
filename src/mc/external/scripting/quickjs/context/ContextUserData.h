#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/quickjs/context/ParseContext.h"

namespace Scripting::QuickJS {

class ContextUserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk91edc7;
    ::ll::UntypedStorage<8, 16>  mUnk557dca;
    ::ll::UntypedStorage<8, 8>   mUnke0c273;
    ::ll::UntypedStorage<8, 8>   mUnk84bd74;
    ::ll::UntypedStorage<8, 24>  mUnkb8e6ac;
    ::ll::UntypedStorage<8, 24>  mUnke6991c;
    ::ll::UntypedStorage<8, 8>   mUnka60b23;
    ::ll::UntypedStorage<8, 8>   mUnk92f52a;
    ::ll::UntypedStorage<8, 8>   mUnkfbe467;
    ::ll::UntypedStorage<8, 8>   mUnk988ba0;
    ::ll::UntypedStorage<8, 24>  mUnkefd5be;
    ::ll::UntypedStorage<8, 296> mUnka21b69;
    ::ll::UntypedStorage<4, 4>   mUnk863b7e;
    ::ll::UntypedStorage<8, 40>  mUnkcdd4d5;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextUserData& operator=(ContextUserData const&);
    ContextUserData(ContextUserData const&);
    ContextUserData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getParseContextErrorMessage();

    MCAPI void popParseContext();

    MCAPI void pushParseContext(
        ::Scripting::QuickJS::ParseContext       context,
        ::entt::meta_type const&                 type,
        ::std::variant<::std::string_view, uint> arg
    );

    MCAPI ~ContextUserData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
