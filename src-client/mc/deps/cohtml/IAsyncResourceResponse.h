#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class DataBuffer; }
// clang-format on

namespace cohtml {

class IAsyncResourceResponse {
public:
    // IAsyncResourceResponse inner types declare
    // clang-format off
    struct UserImageData;
    // clang-format on

    // IAsyncResourceResponse inner types define
    enum class Status : int {
        Success = 0,
        Failure = 1,
    };

    struct UserImageData {
    public:
        // UserImageData inner types define
        enum class TextureFilteringMode : int {
            FilterPoint  = 0,
            FilterLinear = 1,
        };

        enum class AlphaPremultiplicationMode : int {
            Premultiplied    = 0,
            NonPremultiplied = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk16189b;
        ::ll::UntypedStorage<4, 4> mUnk68a279;
        ::ll::UntypedStorage<4, 4> mUnkef4915;
        ::ll::UntypedStorage<4, 4> mUnk9e6001;
        ::ll::UntypedStorage<4, 4> mUnkf6e233;
        ::ll::UntypedStorage<4, 4> mUnkf4cfe5;
        ::ll::UntypedStorage<4, 4> mUnkc28890;
        ::ll::UntypedStorage<4, 4> mUnk9b804c;
        ::ll::UntypedStorage<4, 4> mUnkffeab0;
        ::ll::UntypedStorage<4, 4> mUnk9482e2;
        ::ll::UntypedStorage<8, 8> mUnkf2e06e;
        ::ll::UntypedStorage<8, 8> mUnk5cc4f9;
        ::ll::UntypedStorage<4, 4> mUnk7144cf;
        ::ll::UntypedStorage<4, 4> mUnkff2cf8;
        // NOLINTEND

    public:
        // prevent constructor by default
        UserImageData& operator=(UserImageData const&);
        UserImageData(UserImageData const&);
        UserImageData();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAsyncResourceResponse() = default;

    virtual void* GetSpace(uint64) = 0;

    virtual void ReceiveUserImage(::cohtml::IAsyncResourceResponse::UserImageData const&) = 0;

    virtual void ReceiveOptimizedData(::cohtml::DataBuffer const*) = 0;

    virtual void SignalProgress() = 0;

    virtual void SetStatus(ushort) = 0;

    virtual void SetResponseURL(char const*) = 0;

    virtual void SetHeader(char const*, char const*) = 0;

    virtual void Finish(::cohtml::IAsyncResourceResponse::Status) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
