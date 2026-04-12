#include "gtest/gtest.h"

#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/phys/AABB.h"

TEST(BlockPosTest, ConvertsToAABBUsingInclusiveBlockBounds) {
    BlockPos const pos{1, 2, 3};

    auto const aabb = static_cast<AABB>(pos);

    EXPECT_EQ(aabb.min.x, 1.0f);
    EXPECT_EQ(aabb.min.y, 2.0f);
    EXPECT_EQ(aabb.min.z, 3.0f);
    EXPECT_EQ(aabb.max.x, 2.0f);
    EXPECT_EQ(aabb.max.y, 3.0f);
    EXPECT_EQ(aabb.max.z, 4.0f);
}

TEST(BlockPosTest, ConvertsToBoundingBoxAtSingleBlock) {
    BlockPos const pos{-4, 8, 12};

    auto const box = static_cast<BoundingBox>(pos);

    EXPECT_EQ(box.min.x, pos.x);
    EXPECT_EQ(box.min.y, pos.y);
    EXPECT_EQ(box.min.z, pos.z);
    EXPECT_EQ(box.max.x, pos.x);
    EXPECT_EQ(box.max.y, pos.y);
    EXPECT_EQ(box.max.z, pos.z);
}

TEST(BlockPosTest, ReturnsBottomCenterAndCenterOffsets) {
    BlockPos const pos{10, 20, 30};

    auto const bottomCenter = pos.bottomCenter();
    auto const center       = pos.center();

    EXPECT_FLOAT_EQ(bottomCenter.x, 10.5f);
    EXPECT_FLOAT_EQ(bottomCenter.y, 20.0f);
    EXPECT_FLOAT_EQ(bottomCenter.z, 30.5f);

    EXPECT_FLOAT_EQ(center.x, 10.5f);
    EXPECT_FLOAT_EQ(center.y, 20.5f);
    EXPECT_FLOAT_EQ(center.z, 30.5f);
}