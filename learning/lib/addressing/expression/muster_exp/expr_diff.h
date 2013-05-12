//
//  expr_diff.h
//  addressing
//
//  Created by xiangyun.kongxy on 5/8/13.
//  Copyright (c) 2013 losor. All rights reserved.
//

#ifndef __addressing__expr_diff__
#define __addressing__expr_diff__

#include "expression.h"

class expr_diff : public expression {
protected:
  expression *m_src;
  expression *m_dst;

public:
  virtual ~expr_diff();
  expr_diff( expression *src, expression *dst );

  virtual enum operation operation() const;
  virtual expression* paramenter( int nth ) const;
  virtual expr_result* calculate( ) const;
};

#endif /* defined(__addressing__expr_diff__) */
