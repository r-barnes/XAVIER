/**
 * File: seed.h
 * Author: G. Guidi, E. Younis
 * Description: Xavier Seed Type Header.
 *
 * Xavier: High-Performance X-Drop Adaptive Banded Pairwise Alignment (Xavier)
 * Copyright (c) 2019, The Regents of the University of California, through
 * Lawrence Berkeley National Laboratory (subject to receipt of any required
 * approvals from the U.S. Dept. of Energy).  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * (1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * (2) Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * (3) Neither the name of the University of California, Lawrence Berkeley
 * National Laboratory, U.S. Dept. of Energy nor the names of its contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * You are under no obligation whatsoever to provide any bug fixes, patches,
 * or upgrades to the features, functionality or performance of the source
 * code ("Enhancements") to anyone; however, if you choose to make your
 * Enhancements available either publicly, or directly to Lawrence Berkeley
 * National Laboratory, without imposing a separate written license agreement
 * for such Enhancements, then you hereby grant the following license: a
 * non-exclusive, royalty-free perpetual license to install, use, modify,
 * prepare derivative works, incorporate into other computer software,
 * distribute, and sublicense such enhancements or derivative works thereof,
 * in binary and source code form.
 */

#ifndef XAVIER_TYPES_SEED_H
#define XAVIER_TYPES_SEED_H

namespace xaiver
{
	class Seed
	{
	private:
		/**
		 * Fields
		 */ 
		int begH;
		int begV;
		int endH;
		int endV;
		int score;
		int length;

	public:

		/**
		 * Default constructor 
		 */ 
		Seed();

		/**
		 * Constructor from seed
		 */ 
		Seed(int _begH, int _begV, int _length);

		/**
		 * Constructor from location
		 */ 
		Seed(int _begH, int _begV, int _endH, int _endV);

		/**
		 * Copy constructor
		 */ 
		Seed(Seed const& other);

		/**
		 * getAlignScore() returns alignment score
		 */ 
		inline int getAlignScore() const;

		/**
		 * getBegH() returns beginning of alignment on sequenceH
		 */ 
		inline int getBegH() const;

		/**
		 * getBegV() returns beginning of alignment on sequenceV
		 */ 
		inline int getBegV() const;

		/**
		 * getEndH() returns ending of alignment on sequenceH
		 */ 
		inline int getEndH() const;

		/**
		 * getEndV() returns ending of alignment on sequenceV
		 */ 
		inline int getEndV() const;

		/**
		 * getAlignLength() returns length of the alignment
		 */ 
		inline int getAlignLength() const;

		/**
		 * setAlignScore() sets alignment score
		 */ 
		inline void setAlignScore(int const value);

		/**
		 * setBegH() sets beginning of alignment on sequenceH
		 * begH <= endH
		 */ 
		inline void setBegH(int const value);

		/**
		 * setBegV() sets beginning of alignment on sequenceV
		 * begV <= endV
		 */ 
		inline void setBegV(int const value);

		/**
		 * setendH() sets ending of alignment on sequenceH
		 * begH <= endH
		 */ 
		inline void setEndH(int const value);

		/**
		 * setendV() sets ending of alignment on sequenceV
		 * begV <= endV
		 */ 
		inline void setEndV(int const value);

		/**
		 * setBegV() sets alignment length (>=0)
		 */ 
		inline void setAlignLength(int const value);
	};
}

#endif /* XAVIER_TYPES_SEED_H */