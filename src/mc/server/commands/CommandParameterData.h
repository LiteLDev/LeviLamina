#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandRegistry;
// clang-format on

class CommandParameterData {
public:
    // CommandParameterData inner types define
    using ParseFunction =
        bool (::CommandRegistry::*)(void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, ::std::string&, ::std::vector<::std::string>&)
            const;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::Bedrock::typeid_t<::CommandRegistry>> mTypeIndex;
    ::ll::TypedStorage<
        8,
        8,
        bool (::CommandRegistry::*)(void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, ::std::string&, ::std::vector<::std::string>&)
            const>
                                                         mParse;
    ::ll::TypedStorage<8, 32, ::std::string>             mName;
    ::ll::TypedStorage<8, 8, char const*>                mEnumNameOrPostfix;
    ::ll::TypedStorage<4, 4, int>                        mEnumOrPostfixSymbol;
    ::ll::TypedStorage<8, 8, char const*>                mChainedSubcommand;
    ::ll::TypedStorage<4, 4, int>                        mChainedSubcommandSymbol;
    ::ll::TypedStorage<4, 4, ::CommandParameterDataType> mParamType;
    ::ll::TypedStorage<4, 4, int>                        mOffset;
    ::ll::TypedStorage<4, 4, int>                        mSetOffset;
    ::ll::TypedStorage<1, 1, bool>                       mIsOptional;
    ::ll::TypedStorage<1, 1, ::CommandParameterOption>   mOptions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CommandParameterData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
