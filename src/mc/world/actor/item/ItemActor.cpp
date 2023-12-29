#include "mc/world/actor/item/ItemActor.h"

ItemStack&       ItemActor::item() { return mItem; }
ItemStack const& ItemActor::item() const { return mItem; }
int&             ItemActor::age() { return mAge; }
int const&       ItemActor::age() const { return mAge; }
int&             ItemActor::pickupDelay() { return mPickupDelay; }
int const&       ItemActor::pickupDelay() const { return mPickupDelay; }
int&             ItemActor::throwTime() { return mThrowTime; }
int const&       ItemActor::throwTime() const { return mThrowTime; }
float&           ItemActor::bobOffs() { return mBobOffs; }
float const&     ItemActor::bobOffs() const { return mBobOffs; }
int&             ItemActor::health() { return mHealth; }
int const&       ItemActor::health() const { return mHealth; }
int&             ItemActor::lifeTime() { return mLifeTime; }
int const&       ItemActor::lifeTime() const { return mLifeTime; }
bool&            ItemActor::isInItemFrame() { return mIsInItemFrame; }
bool const&      ItemActor::isInItemFrame() const { return mIsInItemFrame; }
bool&            ItemActor::isFromFishing() { return mIsFromFishing; }
bool const&      ItemActor::isFromFishing() const { return mIsFromFishing; }
