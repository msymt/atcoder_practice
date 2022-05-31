using System;
using System.Buffers.Text;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Numerics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;

namespace AtCoder
{
  class Program
  {
    static void Main()
    {
      int n = int.Parse(Console.ReadLine());
      int[] array = new int[n];
      for(var index = 0; index < n; index++)
      {
        int input = int.Parse(Console.ReadLine());
        array[index] = input;
      }
      Array.Sort(array);
      Console.WriteLine(array[0]);
      return;
    }
  }
}
