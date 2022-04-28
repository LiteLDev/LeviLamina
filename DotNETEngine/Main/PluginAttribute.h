#include "../Header/LLAPI.h"

using System::Attribute;
using System::AttributeUsageAttribute;
using System::AttributeTargets;

namespace LLNET::Core
{
	public ref class LLNETLibraryAttribute sealed
		:public Attribute
	{
	public:
		property int Major;
		property int Minor;
		property int Revision;
		property LLNET::LL::Version::StatusEnum Status;
		LLNETLibraryAttribute()
		{
			Major = 0;
			Minor = 0;
			Revision = 0;
			Status = LLNET::LL::Version::StatusEnum::Release;
		}
	};
} // namespace LLNET