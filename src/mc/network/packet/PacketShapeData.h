#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShapeType.h"

namespace ScriptModuleDebugUtilities {

// 定义一个名为 PacketShapeData 的结构体。
// 这个结构体可能用于在网络间传输或在不同系统间传递用于渲染调试形状的数据。
struct PacketShapeData {
public:
    // 成员变量
    // NOLINTBEGIN

    // 网络ID：用于在网络上唯一标识这个调试形状。
    ::ll::TypedStorage<8, 8, uint64> mNetworkId;

    // 形状类型：一个可选的形状类型，定义了这个调试对象是什么样子（例如：方块、线、球体等）。
    // 使用 std::optional 意味着这个值可能存在，也可能不存在。
    ::ll::TypedStorage<1, 2, ::std::optional<::ScriptModuleDebugUtilities::ScriptDebugShapeType>> mShapeType;

    // 位置：一个可选的三维向量，表示形状在世界中的位置坐标 (x, y, z)。
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mLocation;

    // 旋转：一个可选的三维向量，表示形状在各个轴上的旋转角度。
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mRotation;

    // 缩放/尺寸：一个可选的浮点数，表示形状的整体缩放比例或大小。
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mScale;

    // 颜色：一个可选的颜色对象，定义了形状的颜色和透明度 (RGBA)。
    ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>> mColor;

    // 剩余总时间（秒）：一个可选的浮点数，表示这个调试形状将显示多长时间。
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mTimeLeftTotalSec;

    // 文本内容：一个可选的字符串，如果形状附带文本（例如，在某个位置显示文字），则会使用这个字段。
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mText;

    // 包围盒边界：一个可选的三维向量，可能用于定义一个立方体形状的长、宽、高。
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mBoxBound;

    // 结束位置：一个可选的三维向量，主要用于线状或箭头状的形状，表示其终点坐标。
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mEndLocation;

    // 箭头长度：一个可选的浮点数，用于箭头形状，定义其箭头部分的长度。
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mArrowHeadLength;

    // 箭头半径：一个可选的浮点数，用于箭头形状，定义其箭头底部的半径。
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mArrowHeadRadius;

    // 分段数：一个可选的无符号字符（uchar），可能用于定义曲线或圆形的平滑度（由多少段线段组成）。
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>> mNumSegments;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketShapeData& operator=(PacketShapeData const&);
    PacketShapeData(PacketShapeData const&);
    PacketShapeData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacketShapeData(::ScriptModuleDebugUtilities::PacketShapeData&&);

    MCAPI ~PacketShapeData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleDebugUtilities::PacketShapeData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
