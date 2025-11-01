#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Cursor {

struct AttachmentProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk43edd2;
    ::ll::UntypedStorage<1, 1>  mUnk69af5e;
    ::ll::UntypedStorage<4, 12> mUnkc7af8c;
    ::ll::UntypedStorage<4, 12> mUnkd5e87d;
    ::ll::UntypedStorage<1, 1>  mUnk9bc5e1;
    ::ll::UntypedStorage<4, 16> mUnk5948d6;
    ::ll::UntypedStorage<4, 16> mUnke7f7ca;
    ::ll::UntypedStorage<4, 16> mUnk2254fe;
    ::ll::UntypedStorage<4, 16> mUnk8a01db;
    // NOLINTEND

public:
    // prevent constructor by default
    AttachmentProperties& operator=(AttachmentProperties const&);
    AttachmentProperties(AttachmentProperties const&);
    AttachmentProperties();
};

} // namespace Editor::Cursor
