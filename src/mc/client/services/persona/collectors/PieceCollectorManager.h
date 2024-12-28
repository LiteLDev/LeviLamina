#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/CollectorType.h"

namespace persona {

class PieceCollectorManager {
public:
    // PieceCollectorManager inner types define
    enum class PrioritySearchFinishedState : uint {
        PriorityOfferFound    = 0,
        PriorityOfferNotFound = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1ee439;
    ::ll::UntypedStorage<8, 16> mUnkdd7bca;
    ::ll::UntypedStorage<8, 16> mUnk7e91ad;
    ::ll::UntypedStorage<8, 16> mUnkf7b704;
    ::ll::UntypedStorage<8, 24> mUnke55687;
    ::ll::UntypedStorage<8, 24> mUnk4b2287;
    ::ll::UntypedStorage<8, 16> mUnk9fed97;
    ::ll::UntypedStorage<8, 16> mUnk50460e;
    ::ll::UntypedStorage<8, 16> mUnk59340c;
    ::ll::UntypedStorage<8, 16> mUnk383f1c;
    ::ll::UntypedStorage<8, 64> mUnk266066;
    ::ll::UntypedStorage<8, 16> mUnk376294;
    // NOLINTEND

public:
    // prevent constructor by default
    PieceCollectorManager& operator=(PieceCollectorManager const&);
    PieceCollectorManager(PieceCollectorManager const&);
    PieceCollectorManager();
};

} // namespace persona
