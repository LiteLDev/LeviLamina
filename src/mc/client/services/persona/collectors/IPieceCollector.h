#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
namespace persona { class PieceOfferWrapper; }
// clang-format on

namespace persona {

class IPieceCollector {
public:
    // IPieceCollector inner types declare
    // clang-format off
    struct QueryInfo;
    // clang-format on

    // IPieceCollector inner types define
    struct QueryInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk99820f;
        ::ll::UntypedStorage<4, 4>  mUnk7a8b25;
        ::ll::UntypedStorage<4, 4>  mUnkcfb2e2;
        ::ll::UntypedStorage<4, 4>  mUnkf72bdd;
        ::ll::UntypedStorage<4, 4>  mUnk53b4dc;
        ::ll::UntypedStorage<1, 1>  mUnk373eb4;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueryInfo& operator=(QueryInfo const&);
        QueryInfo(QueryInfo const&);
        QueryInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd68724;
    ::ll::UntypedStorage<8, 32> mUnk90b349;
    ::ll::UntypedStorage<4, 4>  mUnkcaa2c8;
    ::ll::UntypedStorage<8, 24> mUnkfc915c;
    ::ll::UntypedStorage<8, 24> mUnkd7cff9;
    ::ll::UntypedStorage<8, 24> mUnk2f5aef;
    ::ll::UntypedStorage<8, 16> mUnk10ff69;
    ::ll::UntypedStorage<8, 80> mUnkedd809;
    ::ll::UntypedStorage<4, 4>  mUnkbe0e91;
    ::ll::UntypedStorage<4, 4>  mUnk7d019f;
    ::ll::UntypedStorage<4, 4>  mUnkfd5d99;
    ::ll::UntypedStorage<4, 4>  mUnkb09a30;
    ::ll::UntypedStorage<4, 4>  mUnk9bc732;
    ::ll::UntypedStorage<1, 1>  mUnk10d5b5;
    ::ll::UntypedStorage<1, 1>  mUnk89d0b2;
    ::ll::UntypedStorage<1, 1>  mUnk10abe0;
    ::ll::UntypedStorage<1, 1>  mUnka52e7c;
    // NOLINTEND

public:
    // prevent constructor by default
    IPieceCollector& operator=(IPieceCollector const&);
    IPieceCollector(IPieceCollector const&);
    IPieceCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPieceCollector() = default;

    // vIndex: 1
    virtual bool isFeatured() const;

    // vIndex: 2
    virtual void _addCollectionEventPage();

    // vIndex: 3
    virtual void _addOfferIdToDiscoveredSet(::persona::PieceOfferWrapper const&);

    // vIndex: 4
    virtual bool _hasDiscoveredOffer(::mce::UUID const&) const;

    // vIndex: 5
    virtual bool _hasPriorityOffer() const;

    // vIndex: 6
    virtual ::mce::UUID const& _getPriorityOfferProductId() const;
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

} // namespace persona
