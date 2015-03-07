// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dHatch_DataMapIteratorOfHatchings_HeaderFile
#define _Geom2dHatch_DataMapIteratorOfHatchings_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Geom2dHatch_DataMapNodeOfHatchings.hxx>
class Standard_NoSuchObject;
class Geom2dHatch_Hatching;
class TColStd_MapIntegerHasher;
class Geom2dHatch_Hatchings;
class Geom2dHatch_DataMapNodeOfHatchings;



class Geom2dHatch_DataMapIteratorOfHatchings  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom2dHatch_DataMapIteratorOfHatchings();
  
  Standard_EXPORT Geom2dHatch_DataMapIteratorOfHatchings(const Geom2dHatch_Hatchings& aMap);
  
  Standard_EXPORT   void Initialize (const Geom2dHatch_Hatchings& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  Geom2dHatch_Hatching& Value()  const;




protected:





private:





};







#endif // _Geom2dHatch_DataMapIteratorOfHatchings_HeaderFile