#pragma once
#include "Types.hpp"

#include "Vec3.hpp"

namespace MC
{
	ref class Vec3;
}

namespace MC
{

	public
	ref class BlockPos : ClassTemplate<BlockPos, ::BlockPos>
	{
	public:
		__ctor_all(BlockPos, ::BlockPos);

		static BlockPos^ Create();
		static BlockPos^ Create(int mx, int my, int mz);
		static BlockPos^ Create(Vec3^ vec);
		static BlockPos^ Create(float f1, float f2, float f3);
		// static BlockPos ^ Create(double d1, double d2, double d3);

		inline String^ ToString() override;
		inline BlockPos^ Add(int dx);
		inline BlockPos^ Add(int dx, int dy);
		inline BlockPos^ Add(int dx, int dy, int dz);
		inline Vec3^ ToVec3();
		inline Vec3^ BottomCenter();
		inline Vec3^ Center();

		static bool operator==(BlockPos^ a, BlockPos^ b);
		static bool operator!=(BlockPos^ a, BlockPos^ b);
		static BlockPos^ operator+(BlockPos^ a, BlockPos^ b);
		static BlockPos^ operator-(BlockPos^ a, BlockPos^ b);

		property int X
		{
			inline int get();
			inline void set(int mx);
		}
		property int Y
		{
			inline int get();
			inline void set(int my);
		}
		property int Z
		{
			inline int get();
			inline void set(int mz);
		}


#if !defined INCLUDE_MCAPI

		static property MC::BlockPos^ MAX {
			MC::BlockPos^ get();
		};

		static property MC::BlockPos^ MIN {
			MC::BlockPos^ get();
		};

		static property MC::BlockPos^ ONE {
			MC::BlockPos^ get();
		};

		static property MC::BlockPos^ ZERO {
			MC::BlockPos^ get();
		};
#else

		BlockPos(MC::BlockPos^ _0);

		property int RandomSeed
		{
			int get();
		}

		MC::BlockPos^ Neighbor(unsigned char _0);

		MC::BlockPos^ Relative(unsigned char _0, int _1);

		static operator MC::BlockPos ^ (MC::Vec3^ _0);

		static void BindType();

		static property MC::BlockPos^ MAX {
			MC::BlockPos^ get();
		};

		static property MC::BlockPos^ MIN {
			MC::BlockPos^ get();
		};

		static property MC::BlockPos^ ONE {
			MC::BlockPos^ get();
		};

		static property MC::BlockPos^ ZERO {
			MC::BlockPos^ get();
		};

#endif // INCLUDE_MCAPI
	};
} // namespace MC