#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EventingRequest {
public:
    // EventingRequest inner types declare
    // clang-format off
    struct ActorMovementCorrectionData;
    struct PersonaEmoteData;
    struct PlayerBounceData;
    struct PlayerUnexpectedFallDamageData;
    // clang-format on
    
    // EventingRequest inner types define
    struct PersonaEmoteData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkc28b4c;
        ::ll::UntypedStorage<1, 1> mUnk73d3b0;
        ::ll::UntypedStorage<4, 4> mUnkb9b4ae;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        PersonaEmoteData& operator=(PersonaEmoteData const&);
        PersonaEmoteData(PersonaEmoteData const&);
        PersonaEmoteData();
    
    };
    
    struct PlayerBounceData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkcf8f72;
        ::ll::UntypedStorage<8, 8> mUnkc09b76;
        ::ll::UntypedStorage<4, 4> mUnkeaecbe;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        PlayerBounceData& operator=(PlayerBounceData const&);
        PlayerBounceData(PlayerBounceData const&);
        PlayerBounceData();
    
    };
    
    struct PlayerUnexpectedFallDamageData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk3878e5;
        ::ll::UntypedStorage<1, 1> mUnk8e3f6b;
        ::ll::UntypedStorage<4, 4> mUnk3b030a;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        PlayerUnexpectedFallDamageData& operator=(PlayerUnexpectedFallDamageData const&);
        PlayerUnexpectedFallDamageData(PlayerUnexpectedFallDamageData const&);
        PlayerUnexpectedFallDamageData();
    
    };
    
    struct ActorMovementCorrectionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk7a7984;
        ::ll::UntypedStorage<8, 24> mUnk783515;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ActorMovementCorrectionData& operator=(ActorMovementCorrectionData const&);
        ActorMovementCorrectionData(ActorMovementCorrectionData const&);
        ActorMovementCorrectionData();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::std::variant<::EventingRequest::PersonaEmoteData, ::EventingRequest::PlayerBounceData, ::EventingRequest::PlayerUnexpectedFallDamageData, ::EventingRequest::ActorMovementCorrectionData>> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EventingRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
