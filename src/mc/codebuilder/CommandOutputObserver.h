#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
namespace Core { class SingleThreadedLock; }
// clang-format on

namespace CodeBuilder {

class CommandOutputObserver
: public ::Core::Observer<::CodeBuilder::CommandOutputObserver, ::Core::SingleThreadedLock> {
public:
    // prevent constructor by default
    CommandOutputObserver& operator=(CommandOutputObserver const&);
    CommandOutputObserver(CommandOutputObserver const&);
    CommandOutputObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void onCommand(::CommandOrigin const&, ::CommandOutput const&) = 0;

    // vIndex: 0
    virtual ~CommandOutputObserver() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace CodeBuilder
