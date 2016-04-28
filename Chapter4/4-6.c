/*
    위 표에 기재한 99와 88을 2진수 더하기로 더하여라.
    부호비트를 무시하고 더한(부호비트도 같이 더함) 후 더한 결과가 8비트보다 많아지면 하위 8비트만 결과로 취하여라.
    이렇게 수행 한 후 결과 비트열을 쓰고 10진수로 변환해보아라.
    이 경우는 오버플로가 난 경우이다.
    
    :  01100011
      +01011000
      ---------
       10111011 == 187
       
       비트의 오버플로우로 인해 값이 정상적으로 출력되지 않음.
       (부호비트가 양수이면 0이지만 음수인 1로 오버플로우가 일어남.
*/