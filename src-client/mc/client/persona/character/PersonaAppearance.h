#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/PieceHandle.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
class TintMapColor;
namespace Json { class Value; }
// clang-format on

class PersonaAppearance {
public:
    // PersonaAppearance inner types define
    enum class EmoteWheelIndicie : int {};

    using ArmSizeType = ::SharedTypes::persona::ArmSizeType;

    using EmoteWheel = ::std::array<::persona::PieceHandle, 4>;

    using PieceTintMap = ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor>;

    using PieceVector = ::std::vector<::persona::PieceHandle>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::persona::PieceHandle>>    mPieceVector;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>             mUnsupportedPieces;
    ::ll::TypedStorage<8, 864, ::std::array<::persona::PieceHandle, 4>> mEmoteWheel;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>       mArmSizeType;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>       mCustomSkinArmSize;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor>> mPieceTintColors;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                                            mSkinColor;
    ::ll::TypedStorage<8, 32, ::std::string> mEncodedClassicSkinImage;
    ::ll::TypedStorage<8, 32, ::std::string> mSerializedLockedClassicSkin;
    ::ll::TypedStorage<1, 1, bool>           mUseClassicSkin;
    ::ll::TypedStorage<1, 1, bool>           mAllowUnownedPieces;
    ::ll::TypedStorage<1, 1, bool>           mSaveSerializedLockedClassicSkin;
    ::ll::TypedStorage<1, 1, bool>           mSaveSerializedUseClassicSkin;
    ::ll::TypedStorage<1, 1, bool>           mSerializedUseClassicSkin;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaAppearance();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaAppearance();

    MCNAPI explicit PersonaAppearance(::persona::PieceHandle&& legacyPiece);

    MCNAPI PersonaAppearance(::PersonaAppearance const& other);

    MCNAPI PersonaAppearance(::PersonaAppearance&& rhs);

    MCNAPI PersonaAppearance(
        ::std::vector<::persona::PieceHandle> const&                                   pieceList,
        ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& tintMap,
        ::mce::Color const&                                                            skinColor,
        ::SharedTypes::persona::ArmSizeType const&                                     armSizeType
    );

    MCNAPI PersonaAppearance(
        ::std::vector<::persona::PieceHandle> const&                                   pieceList,
        ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& tintMap,
        ::mce::Color const&                                                            skinColor,
        ::SharedTypes::persona::ArmSizeType const&                                     armSizeType,
        ::std::array<::persona::PieceHandle, 4> const&                                 emoteWheel
    );

    MCNAPI bool _doesSerializedPieceContainFlag(::Json::Value const& serializedPiece, char const flagToCheckFor) const;

    MCNAPI ::std::string _getSerializedPieceIdNoFlags(::Json::Value const& serializedPiece);

    MCNAPI bool _hasEmote(::std::string const& pieceId) const;

    MCNAPI void _preHandleSettingPiece(::SharedTypes::persona::PieceType pieceTypeBeingSet);

    MCNAPI void copyEquivalentGroupFrom(::PersonaAppearance const& source, ::SharedTypes::persona::PieceType pieceType);

    MCNAPI bool fillFromJSON(::SemVersion const& version, ::Json::Value const& appearanceInfo);

    MCNAPI bool getAllowUnownedPieces() const;

    MCNAPI int getEmoteWheelIndex(::std::string const& pieceId) const;

    MCNAPI ::persona::PieceHandle const& getEquivalentPiece(::SharedTypes::persona::PieceType pieceType) const;

    MCNAPI ::persona::PieceHandle const& getPiece(::std::string const& pieceId) const;

    MCNAPI ::persona::PieceHandle const& getPiece(::SharedTypes::persona::PieceType pieceType) const;

    MCNAPI bool isAnyEmoteSlotSet() const;

    MCNAPI bool isEmoteWheelEqual(::PersonaAppearance const& rhs) const;

    MCNAPI bool isPhysicalTraitEqual(::PersonaAppearance const& rhs) const;

    MCNAPI bool isPieceVectorEqual(::PersonaAppearance const& rhs) const;

    MCNAPI bool isPieceVectorExcludingClassicSkinEqual(::PersonaAppearance const& rhs) const;

    MCNAPI bool isTintEqual(::PersonaAppearance const& rhs) const;

    MCNAPI ::PersonaAppearance& operator=(::PersonaAppearance const& rhs);

    MCNAPI ::PersonaAppearance& operator=(::PersonaAppearance&& rhs);

    MCNAPI bool removeEmotesWithId(::std::string const& emoteId);

    MCNAPI void removeEquivalentPieces(::SharedTypes::persona::PieceType pieceType);

    MCNAPI void setCustomSkinEncoded(::std::string&& encodedSkin);

    MCNAPI void setEmote(int emoteWheelSlot, ::persona::PieceHandle const& newEmote);

    MCNAPI void setPiece(::persona::PieceHandle const& newPiece);

    MCNAPI void setTintMapColor(::SharedTypes::persona::PieceType pieceType, ::mce::Color const& color, ushort channel);

    MCNAPI ::Json::Value toJSONObject(bool allowInvalid, bool includeUnsupported) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isSerializedPieceEmpty(::Json::Value const& serializedPiece);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::persona::PieceHandle&& legacyPiece);

    MCNAPI void* $ctor(::PersonaAppearance const& other);

    MCNAPI void* $ctor(::PersonaAppearance&& rhs);

    MCNAPI void* $ctor(
        ::std::vector<::persona::PieceHandle> const&                                   pieceList,
        ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& tintMap,
        ::mce::Color const&                                                            skinColor,
        ::SharedTypes::persona::ArmSizeType const&                                     armSizeType
    );

    MCNAPI void* $ctor(
        ::std::vector<::persona::PieceHandle> const&                                   pieceList,
        ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& tintMap,
        ::mce::Color const&                                                            skinColor,
        ::SharedTypes::persona::ArmSizeType const&                                     armSizeType,
        ::std::array<::persona::PieceHandle, 4> const&                                 emoteWheel
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
