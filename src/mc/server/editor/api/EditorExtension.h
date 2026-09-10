#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::API {

class EditorExtension : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk5759f3;
    ::ll::UntypedStorage<8, 32>  mUnk212a57;
    ::ll::UntypedStorage<8, 32>  mUnk920bb2;
    ::ll::UntypedStorage<8, 32>  mUnk91993d;
    ::ll::UntypedStorage<4, 4>   mUnkd042ea;
    ::ll::UntypedStorage<8, 16>  mUnk155d3d;
    ::ll::UntypedStorage<8, 112> mUnk7bcc01;
    ::ll::UntypedStorage<8, 112> mUnk9025b6;
    ::ll::UntypedStorage<8, 40>  mUnkc15389;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorExtension& operator=(EditorExtension const&);
    EditorExtension(EditorExtension const&);
    EditorExtension();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorExtension() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::API
