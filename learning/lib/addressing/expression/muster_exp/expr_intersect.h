//
//  expr_intersect.h
//  addressing
//
//  Created by xiangyun.kongxy on 5/8/13.
//  Copyright (c) 2013 losor. All rights reserved.
//

#ifndef __addressing__expr_intersect__
#define __addressing__expr_intersect__

#include "expression.h"

class expr_intersect : public expression {
protected:
  expression *m_src;
  expression *m_dst;

public:
  virtual ~expr_intersect();
  expr_intersect( expression *src, expression *dst );

  virtual enum operation operation() const;
  virtual expression* paramenter( int nth ) const;
  virtual expr_result* calculate( ) const;
};

#endif /* defined(__addressing__expr_intersect__) */