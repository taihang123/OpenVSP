//
// This file is released under the terms of the NASA Open Source Agreement (NOSA)
// version 1.3 as detailed in the LICENSE file which accompanies this software.
//
//////////////////////////////////////////////////////////////////////

#ifndef INTERACTION_CLASSES_H
#define INTERACTION_CLASSES_H

class LOOP_ENTRY {

public:

    int NextEdge;
    int NumberOfVortexEdges;
    VSP_EDGE** Edge;
    
};

// Small class for stack list

class STACK_ENTRY {

public:

    int Level;
    int Loop;

};

// Small class for list of vortex sheets and their level

class VORTEX_SHEET_ENTRY {

public:

   int Sheet;
   int Level;
   int SheetID;
   double Distance;

};

// Small class for list of vortex sheets and their level

class VORTEX_SHEET_LIST {

public:

   int NextSheet;
   int NumberOfSheets;
   VORTEX_SHEET_ENTRY *Sheet;
   
};

// Small class for list of vortex streamlines and their level

class VORTEX_STREAMLINE_ENTRY {

public:

   int Edge;
   int Level;
   int EdgeID;
   double Distance;
   
};

// Small class for list of vortex streamlines and their level

class VORTEX_STREAMLINE_LIST {

public:

   int NextEdge;
   int NumberOfEdges;
   VORTEX_STREAMLINE_ENTRY *Edge;
   
};

#endif
