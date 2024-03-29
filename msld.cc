/* 
   msld - read output from ms, calculate LD-related summary statistics

   Copyright (C) 2002 Kevin Thornton

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  

*/
#include <iostream>
#include <Sequence/SimParams.hpp>
#include <Sequence/SimData.hpp>
#include <Sequence/PolySIM.hpp>

using namespace std;
using namespace Sequence;

int main(int argc, char *argv[]) {
  SimData d;
  std::ios_base::sync_with_stdio(true);
  int rv;
  while((rv=d.fromfile(stdin)) != EOF)
    {
      if (d.numsites() > 0)
	{
	  PolySIM P(&d);
	  cout << P.DandVK() << '\t' << P.DandVH() << '\t' << P.Minrec()<<'\t';
	  cout << P.WallsB() << '\t' << P.WallsQ() << '\t';
	  cout << P.HudsonsC() << endl;
	}
      else
	{
	  cout <<0<<'\t' <<0<<'\t' <<0<<'\t'<<0<<'\t' <<0<<'\t' <<0<<'\t'<<endl;
	} 
    }
}
