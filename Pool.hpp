/*
 * =====================================================================================
 *
 *       Filename:  Pool.hpp
 *
 *    Description:  Object manager template, useful when inheriting from it and using
 *    base functionality provided here. Provides STL interface for looping over using
 *    iterators.
 *
 *        Version:  1.0
 *        Created:  11/09/2012 09:41:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Vytis Valentinavičius (xytis), vytis.valentinavicius@gmail.com
 *        Company:  Nolife4Life
 *
 * =====================================================================================
 */

#include <vector>

 namespace Snippets {
   namespace Utils {

     template<typename T, size_t max_size>
     class Pool {
       public:
         template<typename U>
         struct Handle;

         typedef T* object_ptr;
         typedef Handle<object_ptr> handle_t;
         typedef std::vector< handle_t >  container_t;
         typedef container_t::iterator    iterator_t;

         template<typename U>
         struct Handle {
         private:
           U                 m_Data;
           const iterator_t  c_Position;
         public:
           Handle(U data, iterator position): m_Data(data), c_Position(position) {}
           //Copy works normally
           ~Handle() {}

           Handle & operator = ( const U & data ) { m_Data = data; }

           
           U & operator->() { return U; }
         }
       public:
         handle_t Get() {
           //Takes the last handle, from the m_Pivot point.
           //Then increases the pivot.
           //If reached the end of pool, return invalid handle, with nullptr inside.
         }
         


       private:
         container_t m_InnerContainer;
         iterator_t m_Pivot;



     };
   }
 }
