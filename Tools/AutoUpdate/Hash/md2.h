/*
 *  Chocobo1/Hash
 *
 *   Copyright 2017-2020 by Mike Tzou (Chocobo1)
 *     https://github.com/Chocobo1/Hash
 *
 *   Licensed under GNU General Public License 3 or later.
 *
 *  @license GPL3 <https://www.gnu.org/licenses/gpl-3.0-standalone.html>
 */

#ifndef CHOCOBO1_MD2_H
#define CHOCOBO1_MD2_H

#include <algorithm>
#include <array>
#include <climits>
#include <cmath>
#include <cstdint>
#include <initializer_list>
#include <string>
#include <vector>

#if (__cplusplus > 201703L)
#include <version>
#endif

#ifndef USE_STD_SPAN_CHOCOBO1_HASH
#if (__cpp_lib_span >= 202002L)
#define USE_STD_SPAN_CHOCOBO1_HASH 1
#else
#define USE_STD_SPAN_CHOCOBO1_HASH 0
#endif
#endif

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
#include <span>
#else
#include "gsl/span"
#endif


namespace Chocobo1
{
	// Use these!!
	// MD2();
}


namespace Chocobo1
{
// users should ignore things in this namespace

namespace Hash
{
#ifndef CONSTEXPR_CPP17_CHOCOBO1_HASH
#if __cplusplus >= 201703L
#define CONSTEXPR_CPP17_CHOCOBO1_HASH constexpr
#else
#define CONSTEXPR_CPP17_CHOCOBO1_HASH
#endif
#endif

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
	using IndexType = std::size_t;
#else
	using IndexType = gsl::index;
#endif

#ifndef CHOCOBO1_HASH_BUFFER_IMPL
#define CHOCOBO1_HASH_BUFFER_IMPL
	template <typename T, IndexType N>
	class Buffer
	{
		public:
			using value_type = T;
			using index_type = IndexType;
			using size_type = std::size_t;

			constexpr Buffer() = default;
			constexpr Buffer(const Buffer &) = default;

			CONSTEXPR_CPP17_CHOCOBO1_HASH Buffer(const std::initializer_list<T> initList)
			{
#if !defined(NDEBUG)
				// check if out-of-bounds
				static_cast<void>(m_array.at(m_dataEndIdx + initList.size() - 1));
#endif

				for (const auto &i : initList)
				{
					m_array[m_dataEndIdx] = i;
					++m_dataEndIdx;
				}
			}

			template <typename InputIt>
			constexpr Buffer(const InputIt first, const InputIt last)
			{
				for (InputIt iter = first; iter != last; ++iter)
				{
					this->fill(*iter);
				}
			}

			constexpr T& operator[](const index_type pos)
			{
				return m_array[pos];
			}

			constexpr T operator[](const index_type pos) const
			{
				return m_array[pos];
			}

			CONSTEXPR_CPP17_CHOCOBO1_HASH void fill(const T &value, const index_type count = 1)
			{
#if !defined(NDEBUG)
				// check if out-of-bounds
				static_cast<void>(m_array.at(m_dataEndIdx + count - 1));
#endif

				for (index_type i = 0; i < count; ++i)
				{
					m_array[m_dataEndIdx] = value;
					++m_dataEndIdx;
				}
			}

			template <typename InputIt>
			constexpr void push_back(const InputIt first, const InputIt last)
			{
				for (InputIt iter = first; iter != last; ++iter)
				{
					this->fill(*iter);
				}
			}

			constexpr void clear()
			{
				m_array = {};
				m_dataEndIdx = 0;
			}

			constexpr bool empty() const
			{
				return (m_dataEndIdx == 0);
			}

			constexpr size_type size() const
			{
				return m_dataEndIdx;
			}

			constexpr const T* data() const
			{
				return m_array.data();
			}

		private:
			std::array<T, N> m_array {};
			index_type m_dataEndIdx = 0;
	};
#endif


namespace MD2_NS
{
	class MD2
	{
		// https://tools.ietf.org/html/rfc1319

		public:
			using Byte = uint8_t;
			using ResultArrayType = std::array<Byte, 16>;

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
			template <typename T, std::size_t Extent = std::dynamic_extent>
			using Span = std::span<T, Extent>;
#else
			template <typename T, std::size_t Extent = gsl::dynamic_extent>
			using Span = gsl::span<T, Extent>;
#endif


			constexpr MD2();

			constexpr void reset();
			CONSTEXPR_CPP17_CHOCOBO1_HASH MD2& finalize();  // after this, only `toArray()`, `toString()`, `toVector()`, `reset()` are available

			std::string toString() const;
			std::vector<Byte> toVector() const;
			constexpr ResultArrayType toArray() const;

			CONSTEXPR_CPP17_CHOCOBO1_HASH MD2& addData(const Span<const Byte> inData);
			CONSTEXPR_CPP17_CHOCOBO1_HASH MD2& addData(const void *ptr, const std::size_t length);
			template <std::size_t N>
			CONSTEXPR_CPP17_CHOCOBO1_HASH MD2& addData(const Byte (&array)[N]);
			template <typename T, std::size_t N>
			MD2& addData(const T (&array)[N]);
			template <typename T>
			MD2& addData(const Span<T> inSpan);

		private:
			CONSTEXPR_CPP17_CHOCOBO1_HASH void addDataImpl(const Span<const Byte> data);

			static constexpr int BLOCK_SIZE = 16;

			Buffer<Byte, (BLOCK_SIZE * 2)> m_buffer;  // x2 for paddings

			std::array<Byte, 48> m_x {};
			std::array<Byte, 16> m_checksum {};
			Byte m_checksumL = 0;

			static constexpr Byte piSubst[256] =
			{
				 41,  46,  67, 201, 162, 216, 124,   1,  61,  54,  84, 161, 236, 240,   6,  19,
				 98, 167,   5, 243, 192, 199, 115, 140, 152, 147,  43, 217, 188,  76, 130, 202,
				 30, 155,  87,  60, 253, 212, 224,  22, 103,  66, 111,  24, 138,  23, 229,  18,
				190,  78, 196, 214, 218, 158, 222,  73, 160, 251, 245, 142, 187,  47, 238, 122,
				169, 104, 121, 145,  21, 178,   7,  63, 148, 194,  16, 137,  11,  34,  95,  33,
				128, 127,  93, 154,  90, 144,  50,  39,  53,  62, 204, 231, 191, 247, 151,   3,
				255,  25,  48, 179,  72, 165, 181, 209, 215,  94, 146,  42, 172,  86, 170, 198,
				 79, 184,  56, 210, 150, 164, 125, 182, 118, 252, 107, 226, 156, 116,   4, 241,
				 69, 157, 112,  89, 100, 113, 135,  32, 134,  91, 207, 101, 230,  45, 168,   2,
				 27,  96,  37, 173, 174, 176, 185, 246,  28,  70,  97, 105,  52,  64, 126,  15,
				 85,  71, 163,  35, 221,  81, 175,  58, 195,  92, 249, 206, 186, 197, 234,  38,
				 44,  83,  13, 110, 133,  40, 132,   9, 211, 223, 205, 244,  65, 129,  77,  82,
				106, 220,  55, 200, 108, 193, 171, 250,  36, 225, 123,   8,  12, 189, 177,  74,
				120, 136, 149, 139, 227,  99, 232, 109, 233, 203, 213, 254,  59,   0,  29,  57,
				242, 239, 183,  14, 102,  88, 208, 228, 166, 119, 114, 248, 235, 117,  75,  10,
				 49,  68,  80, 180, 143, 237,  31,  26, 219, 153, 141,  51, 159,  17, 131,  20
			};
	};

	constexpr MD2::Byte MD2::piSubst[256];


	template <typename R, typename T>
	constexpr R ror(const T x, const unsigned int s)
	{
		static_assert(std::is_unsigned<R>::value, "");
		static_assert(std::is_unsigned<T>::value, "");
		return static_cast<R>(x >> s);
	}


	//
	constexpr MD2::MD2()
	{
		static_assert((CHAR_BIT == 8), "Sorry, we don't support exotic CPUs");
		reset();
	}

	constexpr void MD2::reset()
	{
		m_buffer.clear();

		m_x = {};
		m_checksum = {};
		m_checksumL = 0;
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH MD2& MD2::finalize()
	{
		// append padding bytes
		const auto len = static_cast<int>(BLOCK_SIZE - (m_buffer.size() % BLOCK_SIZE));
		m_buffer.fill(static_cast<Byte>(len), len);
		addDataImpl({m_buffer.data(), m_buffer.size()});
		m_buffer.clear();

		// append checksum
		const auto currentChecksum = m_checksum;
		addDataImpl(currentChecksum);

		return (*this);
	}

	std::string MD2::toString() const
	{
		const auto a = toArray();
		std::string ret;
		ret.resize(2 * a.size());

		auto retPtr = &ret.front();
		for (const auto c : a)
		{
			const Byte upper = ror<Byte>(c, 4);
			*(retPtr++) = static_cast<char>((upper < 10) ? (upper + '0') : (upper - 10 + 'a'));

			const Byte lower = c & 0xf;
			*(retPtr++) = static_cast<char>((lower < 10) ? (lower + '0') : (lower - 10 + 'a'));
		}

		return ret;
	}

	std::vector<MD2::Byte> MD2::toVector() const
	{
		const auto a = toArray();
		return {a.begin(), a.end()};
	}

	constexpr MD2::ResultArrayType MD2::toArray() const
	{
		return {{m_x[0], m_x[1], m_x[2], m_x[3], m_x[4], m_x[5], m_x[6], m_x[7], m_x[8], m_x[9], m_x[10], m_x[11], m_x[12], m_x[13], m_x[14], m_x[15]}};
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH MD2& MD2::addData(const Span<const Byte> inData)
	{
		Span<const Byte> data = inData;

		if (!m_buffer.empty())
		{
			const size_t len = std::min<size_t>((BLOCK_SIZE - m_buffer.size()), data.size());  // try fill to BLOCK_SIZE bytes
			m_buffer.push_back(data.begin(), (data.begin() + len));

			if (m_buffer.size() < BLOCK_SIZE)  // still doesn't fill the buffer
				return (*this);

			addDataImpl({m_buffer.data(), m_buffer.size()});
			m_buffer.clear();

			data = data.subspan(len);
		}

		const size_t dataSize = data.size();
		if (dataSize < BLOCK_SIZE)
		{
			m_buffer = {data.begin(), data.end()};
			return (*this);
		}

		const size_t len = dataSize - (dataSize % BLOCK_SIZE);  // align on BLOCK_SIZE bytes
		addDataImpl(data.first(len));

		if (len < dataSize)  // didn't consume all data
			m_buffer = {(data.begin() + len), data.end()};

		return (*this);
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH MD2& MD2::addData(const void *ptr, const std::size_t length)
	{
		// Span::size_type = std::size_t
		return addData({static_cast<const Byte*>(ptr), length});
	}

	template <std::size_t N>
	CONSTEXPR_CPP17_CHOCOBO1_HASH MD2& MD2::addData(const Byte (&array)[N])
	{
		return addData({array, N});
	}

	template <typename T, std::size_t N>
	MD2& MD2::addData(const T (&array)[N])
	{
		return addData({reinterpret_cast<const Byte*>(array), (sizeof(T) * N)});
	}

	template <typename T>
	MD2& MD2::addData(const Span<T> inSpan)
	{
		return addData({reinterpret_cast<const Byte*>(inSpan.data()), inSpan.size_bytes()});
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH void MD2::addDataImpl(const Span<const Byte> data)
	{
		for (size_t i = 0, iend = static_cast<size_t>(data.size() / BLOCK_SIZE); i < iend; ++i)
		{
			const Span<const Byte> m(static_cast<const Byte *>(data.data() + (i * BLOCK_SIZE)), 16);

			// calculate checksum

			// TODO: piSubst was here, move it back when static variable in constexpr function is allowed

			for (int j = 0; j < 16; ++j)
			{
				m_checksum[j] = static_cast<Byte>(m_checksum[j] ^ piSubst[m[j] ^ m_checksumL]);
				m_checksumL = m_checksum[j];
			}

			// calculate hash
			for (int j = 0; j < 16; ++j)
			{
				m_x[j + 16] = m[j];
				m_x[j + 32] = m_x[j + 16] ^ m_x[j];
			}

			Byte t = 0;
			for (int j = 0; j < 18; ++j)
			{
				for (int k = 0; k < 48; ++k)
				{
					m_x[k] ^= piSubst[t];
					t = m_x[k];
				}
				t = static_cast<Byte>(t + j);
			}
		}
	}
}
}
	using MD2 = Hash::MD2_NS::MD2;
}

#endif  // CHOCOBO1_MD2_H
